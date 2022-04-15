//----- (00000001407E8750) ----------------------------------------------------
__int64 __fastcall sub_1407E8750(char* a1, int a2)
{
	int UserDefaultLCID; // eax

	if (_security_cookie != qword_140DC5308)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC5308))();
	UserDefaultLCID = GetUserDefaultLCID();
	return sub_1407E84D8(UserDefaultLCID, a1, a2);
}
// 140DC5308: using guessed type __int64 qword_140DC5308;

