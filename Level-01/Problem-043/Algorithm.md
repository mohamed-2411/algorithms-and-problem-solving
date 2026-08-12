# Algorithm

1. start
2. read totalseconds
3. days = totalseconds / 86400
4. totalseconds -= days * 86400
5. hours = totalseconds / 3600
6. totalseconds -= hours * 3600
7. minutes = totalseconds / 60
8. totalseconds -= minutes * 60
9. seconds = totalseconds
10. print(days + ":" + hours + ":" + minutes + ":" + seconds)
11. end  