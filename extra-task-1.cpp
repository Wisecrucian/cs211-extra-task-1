double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
   
}

double hours_difference(double time_1, double time_2)
{
    return (time_2 - time_1) / 3600;
 
}



double to_24_hour_clock(double hours)
{
    return (hours < 13) ? hours : hours - ((int)(hours / 12)) * 12;
}


double get_hours(double time)
{
    return (int)(time / 3600);
}

double get_minutes(double time)
{
    return (int)(time - (int)(time / 3600)*3600)/60;
}
double get_seconds(double time)
{
    return time - get_hours(time) * 3600 - get_minutes(time) * 60;
}


double time_to_utc(int utc_offset, double time)
{
    time += -1*utc_offset;

    return (time < 24) ? time : time - ((int)(time / 24)) * 24;;
}

//double time_from_utc(int utc_offset, double time)
//{
//    /*
//        Return UTC time in time zone utc_offset.
//
//        >>> time_from_utc(+0, 12.0)
//        12.0
// 
//        >>> time_from_utc(+1, 12.0)
//        13.0
// 
//        >>> time_from_utc(-1, 12.0)
//        11.0
// 
//        >>> time_from_utc(+6, 6.0)
//        12.0
// 
//        >>> time_from_utc(-7, 6.0)
//        23.0
// 
//        >>> time_from_utc(-1, 0.0)
//        23.0
// 
//        >>> time_from_utc(-1, 23.0)
//        22.0
// 
//        >>> time_from_utc(+1, 23.0)
//        0.0
//    */
//}
