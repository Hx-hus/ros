;; Auto-generated. Do not edit!


(when (boundp 'test::addints)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'addints (find-package "TEST")))
(unless (find-package "TEST::ADDINTS")
  (make-package "TEST::ADDINTS"))
(unless (find-package "TEST::ADDINTSREQUEST")
  (make-package "TEST::ADDINTSREQUEST"))
(unless (find-package "TEST::ADDINTSRESPONSE")
  (make-package "TEST::ADDINTSRESPONSE"))

(in-package "ROS")





(defclass test::addintsRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod test::addintsRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::addintsResponse
  :super ros::object
  :slots (_sum ))

(defmethod test::addintsResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::addints
  :super ros::object
  :slots ())

(setf (get test::addints :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get test::addints :datatype-) "test/addints")
(setf (get test::addints :request) test::addintsRequest)
(setf (get test::addints :response) test::addintsResponse)

(defmethod test::addintsRequest
  (:response () (instance test::addintsResponse :init)))

(setf (get test::addintsRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get test::addintsRequest :datatype-) "test/addintsRequest")
(setf (get test::addintsRequest :definition-)
      "int32 num1
int32 num2
---
int32 sum

")

(setf (get test::addintsResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get test::addintsResponse :datatype-) "test/addintsResponse")
(setf (get test::addintsResponse :definition-)
      "int32 num1
int32 num2
---
int32 sum

")



(provide :test/addints "4781436a0c2affec8025955a6041e481")


