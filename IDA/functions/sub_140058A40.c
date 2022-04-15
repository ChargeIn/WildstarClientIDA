//----- (0000000140058A40) ----------------------------------------------------
__int64 __fastcall sub_140058A40(__int64 a1, int a2)
{
	__int64* v3; // rdi
	unsigned __int64* v4; // r10
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v3 = (__int64*)sub_1400580E0(a1, a2);
	v5 = -1i64;
	do
		++v5;
	while (*((_BYTE*)v4 + v5));
	v6 = sub_140062650(a1, v4, v5);
	v7 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v9 = v6;
	v10 = 4;
	result = sub_14005EA50(a1, v3, (int*)&v9, v7);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}
// 140058A63: variable 'v4' is possibly undefined

