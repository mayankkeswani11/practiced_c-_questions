/*5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.*/
#include <iostream>
using namespace std;
class Photon
{
private:
    double wavelength;

public:
    void set_wavelength()
    {
        cout << "enter wavelength to calculate photon energy  :";
        cin >> wavelength;
    }
    int return_wavlength()
    {
        return wavelength;
    }
    virtual void photon_energy() = 0;
};
class calculate_photonenergy : public Photon
{
public:
    void photon_energy()
    {
        cout << "photon_energy =" << ((6.62607015 * 1e-34 * 3 * 1e8) * (return_wavlength())) << "joules" << endl;
    }
};
int main()
{
    calculate_photonenergy c;
    c.set_wavelength();
    c.photon_energy();
    return 0;
}
// planck const = 6.62607015×10−34 joule-hertz−1
