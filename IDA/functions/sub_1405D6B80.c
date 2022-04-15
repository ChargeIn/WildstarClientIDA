//----- (00000001405D6B80) ----------------------------------------------------
void __fastcall sub_1405D6B80(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v6)(); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	if (*(_QWORD*)(a1 + 208))
		sub_140195D70(a1 + 192);
	v2 = *(_QWORD*)(a1 + 176);
	if (!v2 || (*(_BYTE*)(v2 + 60) & 2) == 0)
	{
		v3 = *(_DWORD*)(a1 + 188);
		v4 = 0;
		v7 = 0i64;
		v6 = sub_140252318;
		v5 = a1;
		sub_140195960(a1 + 192, v3, (__int64)&v4, 4);
	}
}
// 140252318: using guessed type __int64 __fastcall sub_140252318();

