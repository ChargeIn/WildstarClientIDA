//----- (0000000140287F20) ----------------------------------------------------
__int64 __fastcall sub_140287F20(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	__int64 v3; // rax
	__int64 v5; // rax
	int v7[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v8; // [rsp+28h] [rbp-30h]
	void(__fastcall * v9)(unsigned __int64*); // [rsp+30h] [rbp-28h]
	__int64 v10; // [rsp+38h] [rbp-20h]
	int v11; // [rsp+40h] [rbp-18h]

	v2 = (_QWORD*)(a1 + 48);
	*(_QWORD*)a1 = *a2;
	v3 = a2[2];
	*(_QWORD*)(a1 + 16) = v3;
	*(_QWORD*)(a1 + 8) = v3;
	*(_QWORD*)(a1 + 24) = a2[3];
	v5 = a2[5];
	v8 = a1;
	*(_QWORD*)(a1 + 32) = v5;
	*(_QWORD*)(a1 + 40) = a2[4];
	v7[0] = 4;
	v7[1] = 1;
	v9 = sub_140288000;
	v10 = 0i64;
	v11 = 1;
	sub_14019DCA0((__int64)v7, 1, 0i64, (int**)(a1 + 48));
	(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v2 + 72i64))(*v2, a2[6]);
	return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 88i64))(*v2);
}

