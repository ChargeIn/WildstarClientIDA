//----- (00000001402E39C0) ----------------------------------------------------
int* __fastcall sub_1402E39C0(__int64 a1, int* a2)
{
	_DWORD* v3; // rax
	int v4; // r9d
	int v5; // r8d
	__int64 v6; // kr08_8
	char v8[16]; // [rsp+20h] [rbp-38h] BYREF
	_DWORD* v9; // [rsp+30h] [rbp-28h]
	int* v10; // [rsp+38h] [rbp-20h]
	int v11; // [rsp+40h] [rbp-18h]
	int v12; // [rsp+44h] [rbp-14h]
	int v13; // [rsp+60h] [rbp+8h] BYREF
	int v14; // [rsp+64h] [rbp+Ch]

	v3 = (_DWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 192i64))(a1, v8);
	v13 = 15;
	v14 = 15;
	v9 = v3 + 2;
	v10 = &v13;
	v11 = v3[2] + 15;
	v12 = v3[3] + 15;
	v4 = v11 / 16;
	v5 = v12 / 16;
	v6 = (int)v3[1];
	*a2 = *v3 / 16;
	a2[1] = ((BYTE4(v6) & 0xF) + (int)v6) >> 4;
	a2[2] = v4;
	a2[3] = v5;
	return a2;
}
// 1402E39C0: using guessed type char var_38[16];

