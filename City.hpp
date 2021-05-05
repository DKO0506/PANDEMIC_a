#pragma once
#include <map>
#include <set>

enum City
{
    Algiers,
    Atlanta,
    Baghdad,
    Bangkok,
    Beijing,
    Bogota,
    BuenosAires,
    Cairo,
    Chennai,
    Chicago,
    Delhi,
    Essen,
    HoChiMinhCity,
    HongKong,
    Istanbul,
    Jakarta,
    Johannesburg,
    Karachi,
    KePasio,
    Khartoum,
    Kinshasa,
    Kolkata,
    Lagos,
    Lima,
    London,
    LosAngeles,
    Madrid,
    Manila,
    MexicoCity,
    Miami,
    Milan,
    Montreal,
    Moscow,
    Mumbai,
    NewYork,
    Osaka,
    Paris,
    Riyadh,
    SanFrancisco,
    Santiago,
    SaoPaulo,
    Seoul,
    Shanghai,
    StPetersburg,
    Sydney,
    Taipei,
    Tehran,
    Tokyo,
    Washington
};

const std::map<City, std::set<City>> connections{
    { Algiers, {Madrid, Paris, Istanbul, Cairo } },
    { Atlanta, {Chicago, Miami, Washington } },
    { Baghdad, {Tehran, Istanbul, Cairo, Riyadh, Karachi } },
    { Bangkok, {Kolkata, Chennai, Jakarta, HoChiMinhCity, HongKong } },
    { Beijing, {Shanghai, Seoul } },
    { Bogota, {MexicoCity, Lima, Miami, SaoPaulo, BuenosAires } },
    { BuenosAires, {Bogota, SaoPaulo } },
    { Cairo, {Algiers, Istanbul, Baghdad, Khartoum, Riyadh } },
    { Chennai, {Mumbai, Delhi, Kolkata, Bangkok, Jakarta } },
    { Chicago, {SanFrancisco, LosAngeles, MexicoCity, Atlanta, Montreal } },
    { Delhi, {Tehran, Karachi, Mumbai, Chennai, Kolkata } },
    { Essen, {London, Paris, Milan, StPetersburg } },
    { HoChiMinhCity, {Jakarta, Bangkok, HongKong, Manila } },
    { HongKong, {Bangkok, Kolkata, HoChiMinhCity, Shanghai, Manila, Taipei } },
    { Istanbul, {Milan, Algiers, StPetersburg, Cairo, Baghdad, Moscow } },
    { Jakarta, {Chennai, Bangkok, HoChiMinhCity, Sydney } },
    { Johannesburg, {Kinshasa, Khartoum } },
    { Karachi, {Tehran, Baghdad, Riyadh, Mumbai, Delhi } },
    { Khartoum, {Cairo, Lagos, Kinshasa, Johannesburg } },
    { Kinshasa, {Lagos, Khartoum, Johannesburg } },
    { Kolkata, {Delhi, Chennai, Bangkok, HongKong } },
    { Lagos, {SaoPaulo, Khartoum, Kinshasa } },
    { Lima, {MexicoCity, Bogota, Santiago } },
    { London, {NewYork, Madrid, Essen, Paris } },
    { LosAngeles, {SanFrancisco, Chicago, MexicoCity, Sydney } },
    { Madrid, {London, NewYork, Paris, SaoPaulo, Algiers } },
    { Manila, {Taipei, SanFrancisco, HoChiMinhCity, Sydney } },
    { MexicoCity, {LosAngeles, Chicago, Miami, Lima, Bogota } },
    { Miami, {Atlanta, MexicoCity, Washington, Bogota } },
    { Milan, {Essen, Paris, Istanbul } },
    { Montreal, {Chicago, Washington, NewYork } },
    { Moscow, {StPetersburg, Istanbul, Tehran } },
    { Mumbai, {Karachi, Delhi, Chennai } },
    { NewYork, {Montreal, Washington, London, Madrid } },
    { Osaka, {Taipei, Tokyo } },
    { Paris, {Algiers, Essen, Madrid, Milan, London } },
    { Riyadh, {Baghdad, Cairo, Karachi } },
    { SanFrancisco, {LosAngeles, Chicago, Tokyo, Manila } },
    { Santiago, {Lima } },
    { SaoPaulo, {Bogota, BuenosAires, Lagos, Madrid } },
    { Seoul, {Beijing, Shanghai, Tokyo } },
    { Shanghai, {Beijing, HongKong, Taipei, Seoul, Tokyo } },
    { StPetersburg, {Essen, Istanbul, Moscow } },
    { Sydney, {Jakarta, Manila, LosAngeles } },
    { Taipei, {Shanghai, HongKong, Osaka, Manila } },
    { Tehran, {Baghdad, Moscow, Karachi, Delhi } },
    { Tokyo, {Seoul, Shanghai, Osaka, SanFrancisco } },
    { Washington, {Atlanta, NewYork, Montreal, Miami } }
};

std::string city_string(City c) {

    switch (c){
        case Algiers: return "Algiers"; break;
        case Atlanta: return "Atlanta"; break;
        case Baghdad: return "Baghdad"; break;
        case Bangkok: return "Bangkok"; break;
        case Beijing: return "Beijing"; break;
        case Bogota: return "Bogota"; break;
        case BuenosAires: return "BuenosAires"; break;
        case Cairo: return "Cairo"; break;
        case Chennai: return "Chennai"; break;
        case Chicago: return "Chicago"; break;
        case Delhi: return "Delhi"; break;
        case Essen: return "Essen"; break;
        case HoChiMinhCity: return "HoChiMinhCity"; break;
        case HongKong: return "HongKong"; break;
        case Istanbul: return "Istanbul"; break;
        case Jakarta: return "Jakarta"; break;
        case Johannesburg: return "Johannesburg"; break;
        case Karachi: return "Karachi"; break;
        case KePasio: return "KePasio"; break;
        case Khartoum: return "Khartoum"; break;
        case Kinshasa: return "Kinshasa"; break;
        case Kolkata: return "Kolkata"; break;
        case Lagos: return "Lagos"; break;
        case Lima: return "Lima"; break;
        case London: return "London"; break;
        case LosAngeles: return "LosAngeles"; break;
        case Madrid: return "Madrid"; break;
        case Manila: return "Manila"; break;
        case MexicoCity: return "MexicoCity"; break;
        case Miami: return "Miami"; break;
        case Milan: return "Milan"; break;
        case Montreal: return "Montreal"; break;
        case Moscow: return "Moscow"; break;
        case Mumbai: return "Mumbai"; break;
        case NewYork: return "NewYork"; break;
        case Osaka: return "Osaka"; break;
        case Paris: return "Paris"; break;
        case Riyadh: return "Riyadh"; break;
        case SanFrancisco: return "SanFrancisco"; break;
        case Santiago: return "Santiago"; break;
        case SaoPaulo: return "SaoPaulo"; break;
        case Seoul: return "Seoul"; break;
        case Shanghai: return "Shanghai"; break;
        case StPetersburg: return "StPetersburg"; break;
        case Sydney: return "Sydney"; break;
        case Taipei: return "Taipei"; break;
        case Tehran: return "Tehran"; break;
        case Tokyo: return "Tokyo"; break;
        case Washington: return "Washington"; break;
    }
}