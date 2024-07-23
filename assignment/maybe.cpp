



namespace hvacdomain
{

class HVACDevice
{


};


}


namespace UI
{
    hvacdomain::HVACDevice hvacdevice;  //variable created of data type

    void doTheTask(int mainChoice)
    {
        if(mainChoice == 1)
            hvacDevice.activateDevice();


    }

    void startTheApplication()
    {
        int firstChoice = getChoice();
        if(firstChoice == 3)
            int categoryChoice= getCategoryChoice();
        doTheTask(firstChocie,CategoryChoice)


    }



}


int main()
{

    UI::startTheApplication();
    return 0;
}


namespace hvacstoroage
{

    class HVACStorage
    {
        private:    
            hvacdomain::HVACDevice devices[5];
        public:
           hvacdomain::HVACDevice getDevice(const int deviceId);
           bool  
           updateHVACDevice(const hvacdomain::HVACDevice
            updatedDevice);
            hvacdomain::HVACDevice[] getDevices(const std::String location);
            







    }





}

















