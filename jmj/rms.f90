program rms
      implicit none
      integer :: N
      
      print *, '받을 정수 개수'
      read *, N
      call plusintegersum(N)
end program rms

subroutine plusintegersum(t)
      implicit none
      integer :: i, t
      real :: rms0, rms1, rms
      real, dimension(t) :: X, Y
      rms0 = 0
      do i = 1, t
       print *, '정수 입력'
       read *, X(i)
       Y(i) = abs(X(i))
       print *, '양의 정수로 변환한 값'
       print *, Y(i)
       rms1 = Y(i)*Y(i)
       print *, '양의 정수의 제곱'
       print *, rms1
       rms0 = rms0+rms1
       print *, '지금까지 양의 정수를 제곱한 것의 합'
       print *, rms0
      enddo
      rms = sqrt(rms0/t)
      print *, 'rms'
      print *, rms
end subroutine plusintegersum

