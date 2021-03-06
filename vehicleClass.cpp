   // program inherit1.cpp
     #include <iostream>
     using namespace std;
     // class declaration part
     class vehicle
     {
         // protected keyword: these variables will be automatically
         // inherited by all the derived class but not outside the
      // base and derived class of vehicle
       protected:
              int    wheels;

              double weight;

       public:

              void  initialize(int input_wheels, double input_weight);

              int  get_wheels(void)        {return wheels;}

              double  get_weight(void)     {return weight;}

              double  wheel_load(void)  {return (weight/wheels);}

    };

   

    // derived class declaration part

  class car : public vehicle

  {

         int passenger_load;

         public:

              void initialize(int input_wheels, double input_weight, int people = 4);

              int passengers(void)

              {

                   return passenger_load;

              }

  };

   

  class truck : public vehicle

  {

          int     passenger_load;

          double  payload;

          public:

               void    init_truck(int  how_many = 4, double  max_load = 24000.0);

               double  efficiency(void);

               int     passengers(void)        {return  passenger_load;}

  };

   

  // the main program

  int main()

  {

     vehicle  unicycle;

    unicycle.initialize(1, 12.5);

   

     cout<<"Using base class, vehicle\n";

     cout<<"-------------------------\n";

     cout<<"The unicycle has " <<unicycle.get_wheels()<<" wheel.\n";

     cout<<"The unicycle's wheel loading is "<<unicycle.wheel_load()<<" kg on the single tire.\n";

     cout<<"The unicycle weighs "<<unicycle.get_weight()<<" kg.\n\n";

   

     car  sedan_car;

     sedan_car.initialize(4, 3500.0, 5);

   

     cout<<"Using derived class, car\n";

    cout<<"------------------------\n";

     cout<<"The sedan car carries "<<sedan_car.passengers()<<" passengers.\n";

     cout<<"The sedan car weighs "<<sedan_car.get_weight()<<" kg.\n";

     cout<<"The sedan's car wheel loading is "<<sedan_car.wheel_load()<<" kg per tire.\n\n";

     truck trailer;

    trailer.initialize(18, 12500.0);

     trailer.init_truck(1, 33675.0);

   

     cout<<"Using derived class, truck\n";

     cout<<"--------------------------\n";

     cout<<"The trailer weighs "<< trailer.get_weight()<< " kg.\n";

     cout<<"The trailer's efficiency is "<<100.0 * trailer.efficiency()<<" %.\n";

    

     // system("pause");

     return 0;

  }

   

  // base and derived class implementation part

  // initialize to any data desired, own by base class

  void vehicle::initialize(int input_wheels, double input_weight)

  {

     wheels = input_wheels;

     weight = input_weight;

  }

   

  // initialize() method own by derived car class

  void car::initialize(int input_wheels, double input_weight, int people)

  {

      // class base variables used by derived car class,

      // because of the protected keyword

      passenger_load = people;

      wheels = input_wheels;

      weight = input_weight;

  }

   

 void truck::init_truck(int how_many, double max_load)

  {

      passenger_load = how_many;

       payload = max_load;

 }

     

 double truck::efficiency(void)

 {

        return payload / (payload + weight);

 }
