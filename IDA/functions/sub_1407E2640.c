//----- (00000001407E2640) ----------------------------------------------------
int __fastcall sub_1407E2640(DWORD a1)
{
	if (_security_cookie != qword_140DC5248)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC5248))();
	else
		return TlsFree(a1);
}
// 140DC5248: using guessed type __int64 qword_140DC5248;

