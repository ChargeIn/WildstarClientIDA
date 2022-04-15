//----- (000000014005B320) ----------------------------------------------------
void __fastcall sub_14005B320(__int64 a1, int a2, __int64 a3, _QWORD* a4)
{
	bool v4; // zf
	__int64 v5; // rdi
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v4 = *((_DWORD*)a4 + 7) == 0;
	v5 = a2;
	v8 = a2;
	if (v4)
		*((_DWORD*)a4 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a4[1])(*a4, &v8, 4i64, a4[2]);
	if (!*((_DWORD*)a4 + 7))
		*((_DWORD*)a4 + 7) = ((__int64(__fastcall*)(_QWORD, __int64, __int64, _QWORD))a4[1])(*a4, a1, 4 * v5, a4[2]);
}

