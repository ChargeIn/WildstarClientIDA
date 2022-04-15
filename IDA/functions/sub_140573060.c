//----- (0000000140573060) ----------------------------------------------------
__int64 __fastcall sub_140573060(__int64 a1, _QWORD** a2)
{
	unsigned int v4; // eax
	__int64 v5; // rdx
	__int64 v6; // r9
	int* v7; // r8
	__int64 v8; // rcx
	int* v10; // [rsp+20h] [rbp-28h] BYREF
	_QWORD** v11; // [rsp+28h] [rbp-20h]
	char v12[24]; // [rsp+30h] [rbp-18h] BYREF
	int* v13; // [rsp+50h] [rbp+8h] BYREF
	int* v14; // [rsp+58h] [rbp+10h] BYREF

	v4 = ((__int64(__fastcall*)(_QWORD**))(*a2)[1])(a2);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(v5 + 8);
	v7 = (int*)v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v4)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = (int*)v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == (int*)v5 || v4 < v7[8])
	{
		v13 = v7;
		LODWORD(v10) = v4;
		v11 = 0i64;
		sub_140055C60(a1 + 8, &v14, (__int64*)&v13, &v10);
		v7 = v14;
	}
	*((_QWORD*)v7 + 5) = a2;
	v8 = *a2[6];
	v11 = a2;
	LODWORD(v13) = *(_DWORD*)(v8 + 12);
	HIDWORD(v13) = *(_DWORD*)(v8 + 20);
	v10 = v13;
	return sub_140574E10(a1 + 40, (__int64)v12, (int*)&v10);
}
// 140573060: using guessed type char var_18[24];

