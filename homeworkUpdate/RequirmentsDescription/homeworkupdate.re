As a Student, I want to checkout homework request.
As a Student, I want to update homework.
As a Teacher, I want to issue homework, so that student can do homework.
{
	Basic Flow {
		(User) 1. the Teacher shall issue homework request.
		(User) 2. the Student shall checkout homework request.
		(User) 3. the Student shall update homework.
		(System) 4. When update homework, the homeworkupdate shall Records every homework and push to Teacher.
		(User) 5. the Teacher shall checkout homework
		(User) 6. the Teacher shall download homework
		(User) 7. the Teacher shall comment homework
		(System) 8. when comment homework, the homeworkupdate shall push to Student
		}
	Alternative Flow {
		A. At any time, Student update homework repeatly :
			1. System delete previous homework 
			2. System save new homework
	}
}