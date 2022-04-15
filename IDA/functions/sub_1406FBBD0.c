//----- (00000001406FBBD0) ----------------------------------------------------
__int64 __fastcall sub_1406FBBD0(__int64 a1)
{
	__int64* v1; // rax
	__int64* v3; // rbx
	bool v4; // cf
	__int64* v5; // rcx
	int v6; // ebp
	int v7; // eax
	int v8; // esi
	int v9; // eax
	int v10; // edx
	__int64 v11; // rax
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(__int64**)(a1 + 24);
	v3 = (__int64*)dword_140A12138;
	v4 = (unsigned __int64)v1 < *(_QWORD*)(a1 + 16);
	v5 = (__int64*)dword_140A12138;
	if (v4)
		v5 = v1;
	LOBYTE(v6) = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_7;
	if (v7 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v15))
	{
		v14 = 3;
		v5 = &v13;
		v13 = v15;
	LABEL_7:
		v8 = (int)*(double*)v5;
		goto LABEL_8;
	}
	v8 = 0;
LABEL_8:
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
		v3 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
	v9 = *((_DWORD*)v3 + 2);
	if (v9 != 3)
	{
		if (v9 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v15))
			goto LABEL_15;
		v14 = 3;
		v3 = &v13;
		v13 = v15;
	}
	v6 = (int)*(double*)v3;
LABEL_15:
	if (v8 < 300)
		v10 = (unsigned __int8)v6 | ((unsigned __int8)v8 << 8);
	else
		v10 = -1;
	v11 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = (double)v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

