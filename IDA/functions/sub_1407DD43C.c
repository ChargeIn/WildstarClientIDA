#include "../winhttp.h"

//----- (00000001407DD43C) ----------------------------------------------------
__int64 __fastcall sub_1407DD43C(UINT* a1, int a2, char* a3)
{
	__int64 v4; // r12
	_QWORD* v6; // r14
	__int64 v8; // rbx
	__int64 v9; // r15
	LPVOID v10; // rax
	_DWORD* v11; // r13
	bool v12; // zf
	int v13; // r8d
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	int v17; // edx
	unsigned __int64* v18; // rcx
	UINT v19; // [rsp+40h] [rbp-C0h] BYREF
	UINT v20; // [rsp+44h] [rbp-BCh]
	void* v21; // [rsp+48h] [rbp-B8h]
	__int64 v22; // [rsp+50h] [rbp-B0h]
	__int16 v23[136]; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v24[32]; // [rsp+170h] [rbp+70h] BYREF
	char v25[176]; // [rsp+270h] [rbp+170h] BYREF

	v4 = a2;
	v6 = sub_1407E3D94() + 110;
	if (!sub_1407DC888(a3, (char*)v23, 131i64, v25, 85i64, (int*)&v19))
		return 0i64;
	v8 = 8 * v4;
	if ((unsigned int)sub_1407E6BB8((char*)v23, *(char**)&a1[8 * v4 + 6]))
	{
		v9 = sub_1407E6CA0(v23);
		v10 = sub_1407E2C30(2 * v9 + 6);
		v11 = v10;
		if (v10)
		{
			v21 = *(void**)&a1[v8 + 6];
			v22 = *(_QWORD*)&a1[2 * v4 + 74];
			v20 = a1[1];
			if ((unsigned int)sub_1407E6BF4((char*)v10 + 4, v9 + 1, (char*)v23))
			{
				sub_1407DC390();
				JUMPOUT(0x1407DD749i64);
			}
			v12 = v23[0] == 67;
			*(_QWORD*)&a1[v8 + 6] = v11 + 1;
			if (!v12 || v23[1])
				*(_QWORD*)&a1[2 * v4 + 74] = sub_1407DC450(v25);
			else
				*(_QWORD*)&a1[2 * v4 + 74] = 0i64;
			switch ((_DWORD)v4)
			{
			case 2:
				v13 = 0;
				v14 = 0i64;
				a1[1] = v19;
				v15 = v6[4];
				while (a1[1] != LODWORD(v6[v14]))
				{
					v16 = v6[v14];
					v6[v14++] = v15;
					++v13;
					v15 = v16;
					if (v14 >= 5)
						goto LABEL_18;
				}
				if (v13)
				{
					*v6 = v6[v13];
					v6[v13] = v15;
				}
			LABEL_18:
				if (v13 == 5)
				{
					if ((unsigned int)sub_1407E82FC(0i64, 1u, byte_14095D480, 127, (WORD*)v24, a1[1], 1))
					{
						v17 = 0;
						v18 = v24;
						do
						{
							++v17;
							*(_WORD*)v18 &= 0x1FFu;
							v18 = (unsigned __int64*)((char*)v18 + 2);
						} while ((unsigned __int64)v17 < 0x7F);
						*((_DWORD*)v6 + 1) = sub_1407E6AF0(v24, (__int64)off_140C0F1A0, 0xFEui64) == 0;
					}
					else
					{
						*((_DWORD*)v6 + 1) = 0;
					}
					*(_DWORD*)v6 = a1[1];
				}
				a1[52] = *((_DWORD*)v6 + 1);
				break;
			case 1:
				a1[2] = v19;
				break;
			case 5:
				a1[3] = v19;
				break;
			}
			if (!((unsigned int(__fastcall*)(unsigned __int64)) * (&funcs_1407DD69E + 3 * v4))((unsigned __int64)a1))
			{
				if (v21 != &unk_140C10010 && !_InterlockedDecrement(*(volatile signed __int32**)&a1[v8 + 10]))
				{
					sub_1407E14C0(*(LPVOID*)&a1[v8 + 10]);
					sub_1407E14C0(*(LPVOID*)&a1[v8 + 8]);
					sub_1407E14C0(*(LPVOID*)&a1[2 * v4 + 74]);
					*(_QWORD*)&a1[v8 + 6] = 0i64;
					*(_QWORD*)&a1[2 * v4 + 74] = 0i64;
				}
				*v11 = 1;
				*(_QWORD*)&a1[v8 + 10] = v11;
				return *(_QWORD*)&a1[v8 + 6];
			}
			*(_QWORD*)&a1[v8 + 6] = v21;
			sub_1407E14C0(*(LPVOID*)&a1[2 * v4 + 74]);
			*(_QWORD*)&a1[2 * v4 + 74] = v22;
			sub_1407E14C0(v11);
			a1[1] = v20;
		}
		return 0i64;
	}
	return *(_QWORD*)&a1[v8 + 6];
}
// 1407DD744: control flows out of bounds to 1407DD749
// 14095D380: using guessed type __int64 (__fastcall *funcs_1407DD69E)();
// 140C0F1A0: using guessed type wchar_t *off_140C0F1A0;
// 1407DD43C: using guessed type unsigned __int64 var_1F0[32];

