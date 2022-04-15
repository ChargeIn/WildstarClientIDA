//----- (00000001407E2678) ----------------------------------------------------
int __fastcall sub_1407E2678(DWORD a1, void* a2)
{
	if (_security_cookie != qword_140DC5258)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC5258))();
	else
		return TlsSetValue(a1, a2);
}
// 140DC5258: using guessed type __int64 qword_140DC5258;

