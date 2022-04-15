//----- (0000000140795450) ----------------------------------------------------
__int64 __fastcall sub_140795450(_QWORD* a1, unsigned __int64* a2, int a3)
{
	__int64 v3; // rbp
	unsigned __int64 v6; // r8
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rax
	int v13; // ecx
	__int64* v14; // rax
	__int64 v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+28h] [rbp-10h]
	__int64 v18; // [rsp+40h] [rbp+8h] BYREF

	v3 = a1[2];
	v6 = -1i64;
	do
		++v6;
	while (*((_BYTE*)a2 + v6));
	v8 = sub_140062650((__int64)a1, a2, v6);
	v9 = a1[2];
	v16 = v8;
	v17 = 4;
	sub_14005E8E0((__int64)a1, v3 - 16, (int*)&v16, v9);
	a1[2] += 16i64;
	v10 = a1[2];
	v11 = *(_DWORD*)(v10 - 8);
	if (v11 == 3 || v11 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v10 - 16) + 32i64), (unsigned __int64*)&v18))
	{
		v12 = a1[2];
		v13 = *(_DWORD*)(v12 - 8);
		v14 = (__int64*)(v12 - 16);
		if (v13 != 3)
		{
			if (v13 != 4 || !sub_14005AC80((char*)(*v14 + 32), (unsigned __int64*)&v18))
			{
				a3 = 0;
				goto LABEL_13;
			}
			v17 = 3;
			v14 = &v16;
			v16 = v18;
		}
		a3 = (int)*(double*)v14;
	}
	else if (a3 < 0)
	{
		sub_140056830(a1, (unsigned __int64*)"field '%s' missing in date table", (const char*)a2);
	}
LABEL_13:
	a1[2] -= 16i64;
	return (unsigned int)a3;
}

