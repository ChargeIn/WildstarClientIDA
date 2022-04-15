//----- (00000001407E265C) ----------------------------------------------------
LPVOID __fastcall sub_1407E265C(DWORD a1)
{
	if (_security_cookie != qword_140DC5250)
		return (LPVOID)((__int64 (*)(void))(_security_cookie ^ qword_140DC5250))();
	else
		return TlsGetValue(a1);
}
// 140DC5250: using guessed type __int64 qword_140DC5250;

