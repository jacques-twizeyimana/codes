class PersonClass{
  private String names;
  private int age;
  private String gender;

  public void setNames(String names){
    this.names=names;
  }

  public String getNames(){
    return this.names;
  }
  public void setAge(int age){
    this.age = age;
  }

  public int getAge(){
    return this.age;
  }
  public void setGender(String gender){
    this.gender=gender;
  }

  public String getGender(){
    return this.gender;
  }

  public String introduceMyself(){
    return "My name is " +this.getNames() + " and my gender is " + this.getGender() +" and my age is "+this.getAge();
  }
}
