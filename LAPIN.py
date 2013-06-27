t=input()
while t>0:
  a=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
	b=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
	t-=1
	s=raw_input()
	if len(s)%2==0:
		n=len(s)/2
		q=n
	else:
		n=len(s)/2+1
		q=n-1
	i=0
	for x in s:
		if i<q:
			a[ord(x)-97]+=1
		elif i>=n:
			b[ord(x)-97]+=1
		i+=1
	i=0
	for k in a:
		if k!=b[i]:
			print 'NO'
			flag=1
			break
		else:
			flag=0
		i+=1
	if flag==0:
		print 'YES'
