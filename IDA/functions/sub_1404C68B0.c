//----- (00000001404C68B0) ----------------------------------------------------
__int64 __fastcall sub_1404C68B0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdx
	__int64 v3; // rax
	__int64* v4; // r10

	if (!a2)
		return 2147500037i64;
	v2 = *(_QWORD*)(a1 + 240);
	if (!v2)
		return 2147500037i64;
	v3 = sub_1404C7710(*(_QWORD*)(a1 + 296), v2);
	if (!v3)
		return 2147500037i64;
	*v4 = v3;
	return 0i64;
}
// 1404C68D9: variable 'v4' is possibly undefined

