//----- (00000001407E2624) ----------------------------------------------------
DWORD sub_1407E2624()
{
	if (_security_cookie != qword_140DC5240)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC5240))();
	else
		return TlsAlloc();
}
// 140DC5240: using guessed type __int64 qword_140DC5240;

