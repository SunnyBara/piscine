from django.db import models
from django.core.validators import MaxValueValidator, MinValueValidator

# Create your models here.
class Band(models.Model):
    def __str__(self) -> str:
       return f'{self.name}'
    
    class Genre(models.TextChoices):
      HIP_HOP = 'HH'
      SYNTH_POP = 'SP'
      ALTERNATIVE_ROCK = 'AR'

    name = models.fields.CharField(max_length=100)
    genre =  models.fields.CharField(choices= Genre.choices, max_length=50)
    biography  = models.fields.CharField(max_length=100)
    year_formed = models.fields.IntegerField(validators = [MinValueValidator(1900), MaxValueValidator(2021)])
    active = models.fields.BooleanField(default = True)
    official_homepage = models.fields.URLField(null=True, blank = True)

class Listing(models.Model):
    class Type(models.TextChoices):
       RECORDS = 'REC'
       CLOTHING = 'CLOTH'
       MISCELLANEOUS = "MISC"
       POSTER = "POST"
    title =  models.fields.CharField(max_length=100)
    description = models.fields.CharField(max_length=100)
    sold = models.fields.BooleanField(default = False)
    year = models.fields.IntegerField(null = True)
    type =  models.fields.CharField(choices =  Type.choices, max_length = 10)
    band = models.ForeignKey(Band,null =  True, on_delete = models.SET_NULL)