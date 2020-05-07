import datetime
from pytz import timezone

now = datetime.datetime.now()
fuso_horario = timezone('America/Sao_Paulo')
nowtime = now.astimezone(fuso_horario)

print(nowtime.strftime("%Y-%m-%d %H:%M"))