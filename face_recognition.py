import cv2
import numpy as num
import pickle

faceCascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml') #Classifier 1 or 0 (predefined model trained on 1 lakh faces available online on github)
recognizer=cv2.face.LBPHFaceRecognizer_create()
recognizer.read("trainer.yml")

labels={"person_name":1}
with open("labels.pickle",'rb') as f:
	og_labels=pickle.load(f)
	labels={v:k for k,v in og_labels.items()} #items contains both key and values
cap = cv2.VideoCapture(0)

while (True):
	ret, frame=cap.read() #Capture frame by frame
	gray  = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
	faces = faceCascade.detectMultiScale(gray, scaleFactor=1.5,minNeighbors=4)
	for (x,y,w,h) in faces:
		#print(x,y,w,h) #Display the resulting frame
		roi_gray=gray[y:y+h,x:x+w]
		roi_color=frame[y:y+h,x:x+w]

		#recognize?
		id_,conf=recognizer.predict(roi_gray)
		if conf>=45 and conf<=85:
		 #print (id_)
		 #print(labels[id_])
		 font=cv2.FONT_HERSHEY_SIMPLEX
		 name=labels[id_]
		 color=(0,0,0)
		 stroke=2
		 cv2.putText(frame,name,(x,y),font,1,color,stroke,cv2.LINE_AA)
		img_item="my image.png"
		cv2.imwrite(img_item,roi_gray)
		cv2.imwrite(img_item,roi_color)

		cv2.rectangle(frame,(x,y),(x+w,y+h),(255,0,0),5)



	cv2.imshow('frame',frame)
	if cv2.waitKey(20) & 0xFF == ord('q'):
		break
cap.release()
cv2.destroyAllWindows()		
