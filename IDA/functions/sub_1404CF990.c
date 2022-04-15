//----- (00000001404CF990) ----------------------------------------------------
__int64 __fastcall sub_1404CF990(_DWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // ecx
	int v6; // edx
	int v7; // edi
	int v8; // [rsp+20h] [rbp-28h] BYREF
	_DWORD* v9; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v10)(); // [rsp+30h] [rbp-18h]
	__int64 v11; // [rsp+38h] [rbp-10h]

	for (result = *(_QWORD*)a1; *(_QWORD*)(*(_QWORD*)a1 + 16i64); result = *(_QWORD*)a1)
	{
		v3 = **(_QWORD**)(result + 8);
		if (*(_DWORD*)(v3 + 40)
			|| (v4 = *(_QWORD*)(v3 + 16)) != 0
			&& (v5 = *(_DWORD*)(v4 + 8)) != 0
			&& dword_140C636A8 - *(_DWORD*)(v3 + 24) > v5)
		{
			v7 = 1;
		}
		else
		{
			v6 = a1[39];
			v7 = 0;
			v8 = 0;
			v9 = a1;
			v10 = sub_1404CF930;
			v11 = 0i64;
			sub_140195960((__int64)(a1 + 20), v6, (__int64)&v8, 4);
		}
		if (*(_QWORD*)v3)
			sub_1403D6480(*(_QWORD*)v3, (_QWORD*)v3);
		result = *(_QWORD*)(v3 + 32);
		if (result)
			result = ((__int64(__fastcall*)(__int64))result)(v3);
		if (!v7)
			break;
	}
	return result;
}
// 1404CF930: using guessed type __int64 __fastcall sub_1404CF930();
// 140C636A8: using guessed type int dword_140C636A8;

