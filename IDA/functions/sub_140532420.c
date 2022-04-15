//----- (0000000140532420) ----------------------------------------------------
__int64 __fastcall sub_140532420(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // ebx
	_DWORD* v6; // rax
	double v7; // xmm0_8
	float v8; // xmm6_4
	_QWORD* v9; // r10
	_QWORD* v10; // rax
	unsigned __int64 v11; // r9
	unsigned __int64 v12; // rdx
	__int64 v13; // r8
	__int64 v14; // rax
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v18))
		{
			v5 = 0;
			goto LABEL_9;
		}
		v17 = 3;
		v3 = &v16;
		v16 = v18;
	}
	v5 = (int)*(double*)v3;
LABEL_9:
	v6 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v7 = 0.0;
	else
		v7 = sub_140056C40(a1, 3u);
	LODWORD(v18) = (***(__int64(__fastcall****)(_QWORD))(v2 + 1152))(*(_QWORD*)(v2 + 1152));
	v9 = (_QWORD*)*((_QWORD*)sub_140538120(v2 + 1376, (int*)&v18) + 7);
	v10 = (_QWORD*)*v9;
	if ((_QWORD*)*v9 != v9)
	{
		while (1)
		{
			v11 = v10[4];
			v12 = 0i64;
			if (v11)
				break;
		LABEL_20:
			v10 = (_QWORD*)*v10;
			if (v10 == v9)
				return 0i64;
		}
		v13 = v10[3];
		while (*(_DWORD*)(*(_QWORD*)v13 + 8i64) != v5)
		{
			++v12;
			v13 += 8i64;
			if (v12 >= v11)
				goto LABEL_20;
		}
		v14 = *(_QWORD*)(v10[3] + 8 * v12);
		if (v14)
		{
			v8 = v7;
			*(float*)(v14 + 176) = v8;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

