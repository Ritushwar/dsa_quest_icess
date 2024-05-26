An interview is happening in WRC for placement in tech companies in Nepal, All the students of a class were asked to attend the interview by the college management. An unique roll number is given to all the students which are the numbers lying from 1 to n(total number of students in the class).

At the time of interview, each student entered the room and had their interview taken and came out waiting for the result. But, One of the student didn’t attend the interview and the interviewer were not able to find the missing student and in order to find the missing student, The interviewer said that if K is the missing student roll number, then selected candidate’s roll number is Kth largest roll number in the class excluding the missing candidate.

Your task is to figure out the roll number of the missing student and the roll number of the selected student based on the roll numbers of the students who attended. <br>

Input Format  <br>

First line contains n, the number of students, Second line contains list of n-1 students,  <br>

Constraints  <br>

0 >= N <=10^5 1 >= a[i] <=10^5  <br>
Output Format <br>

Missing candidate roll number and selected candidate roll number separated by a space.<br>
Sample Input 0  <br>

5  <br>
4 1 3 2  <br>
Sample Output 0  <br>

5 -1  <br>
Explanation 0  <br>

Here, the missing student is with roll 5 and the 5th largesst number does not exit.So, output is 5 -1.  <br>

Sample Input 1  <br>

10  <br>
2 3 1 5 6 10 9 8 7  <br>
Sample Output 1   <br>

4 7   <br>
Explanation 1  <br>

Here the missing student is with roll 4 and 4the largest number is 7.  <br>