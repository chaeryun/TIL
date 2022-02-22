
# python manage,py migrate, runserver 오류 해결


```
WARNINGS:
movieRec.Recomm: (models.W042) Auto-created primary key used when not defining a primary key type, by default 'django.db.models.AutoField'.
        HINT: Configure the DEFAULT_AUTO_FIELD setting or the MovierecConfig.default_auto_field attribute to point to a subclass of AutoField, e.g. 'django.db.models.BigAutoField'.
movieRec.Viewed: (models.W042) Auto-created primary key used when not defining a primary key type, by default 'django.db.models.AutoField'.
        HINT: Configure the DEFAULT_AUTO_FIELD setting or the MovierecConfig.default_auto_field attribute to point to a subclass of AutoField, e.g. 'django.db.models.BigAutoField'.
```

```
무비레코드.권장: (모델).W042) 기본 키 유형을 정의하지 않을 때 사용되는 자동 생성 기본 키. 기본적으로 'django.db.models'입니다.자동 필드'입니다.
힌트: AutoField의 하위 클래스(예: 'django.db.models)를 가리키도록 DEFAULT_AUTO_FIELD 설정 또는 MovierecConfig.default_auto_field 특성을 구성합니다.BigAutoField'.
무비레코드.보기: (모형)W042) 기본 키 유형을 정의하지 않을 때 사용되는 자동 생성 기본 키. 기본적으로 'django.db.models'입니다.자동 필드'입니다.
힌트: AutoField의 하위 클래스(예: 'django.db.models)를 가리키도록 DEFAULT_AUTO_FIELD 설정 또는 MovierecConfig.default_auto_field 특성을 구성합니다.BigAutoField'.
```



해결방법 : settins.py에 아래 코드를 삽입해주자.



```python
DEFAULT_AUTO_FIELD = 'django.db.models.AutoField'
```