//----- (0000000140183800) ----------------------------------------------------
__int64 __fastcall sub_140183800(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rcx
	__int64 v4; // rdi
	int v5; // eax
	__int64 v6; // rdx
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140183600(a1);
	v3 = (__int64*)dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v5 = *((_DWORD*)v3 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v10))
		{
			v6 = 0i64;
			goto LABEL_8;
		}
		v9 = 3;
		v3 = &v8;
		v8 = v10;
	}
	v6 = (unsigned int)(int)*(double*)v3;
LABEL_8:
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 600i64))(v4, v6);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
