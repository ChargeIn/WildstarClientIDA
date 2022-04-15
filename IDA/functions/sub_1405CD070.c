//----- (00000001405CD070) ----------------------------------------------------
void __fastcall sub_1405CD070(__int64 a1, __int64 a2, __int64 a3, double a4)
{
	unsigned int v4; // edi
	__int64 v6; // rdx
	__int64** v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	_QWORD* v10; // rax
	__int64 v11; // rax
	unsigned int v12; // edx
	unsigned int v13; // ecx
	int v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v16)(); // [rsp+30h] [rbp-18h]
	__int64 v17; // [rsp+38h] [rbp-10h]

	v4 = dword_140C636A8;
	while (**(_QWORD**)(a1 + 136) != *(_QWORD*)(a1 + 136))
	{
		v6 = **(_QWORD**)(a1 + 136);
		if (*(_DWORD*)(a1 + 24) + *(_DWORD*)(v6 + 20) > v4)
			break;
		sub_1405CD200((__int64*)a1, v6 + 16, a3, a4);
		v7 = *(__int64***)(a1 + 136);
		if (*v7 != (__int64*)v7)
		{
			v8 = *v7;
			v9 = **v7;
			v10 = (_QWORD*)(*v7)[1];
			*v10 = v9;
			*(_QWORD*)(v9 + 8) = v10;
			sub_14018B900((__int64)v8, 0);
		}
	}
	if (!*(_DWORD*)(a1 + 36))
	{
		v11 = *(_QWORD*)(a1 + 136);
		if (*(_QWORD*)v11 != v11)
		{
			v12 = v4;
			v13 = *(_DWORD*)(a1 + 24) + *(_DWORD*)(*(_QWORD*)v11 + 20i64);
			v15 = a1;
			v16 = sub_1405CD070;
			if (v13 > v4)
				v12 = v13;
			v14 = 0;
			v17 = 0i64;
			sub_140195960(a1 + 192, v12 - v4, (__int64)&v14, 4);
		}
	}
}
// 1405CD0AB: variable 'a3' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;

