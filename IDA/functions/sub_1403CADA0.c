//----- (00000001403CADA0) ----------------------------------------------------
__int64 __fastcall sub_1403CADA0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx
	float v8; // xmm0_4
	int* v9; // r8
	char v10[40]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
	float v13; // [rsp+64h] [rbp+1Ch]
	unsigned int v14; // [rsp+68h] [rbp+20h] BYREF
	unsigned int v15; // [rsp+6Ch] [rbp+24h]

	v11 = a2;
	result = sub_1401FF120(a2);
	v5 = result;
	if (result)
	{
		if ((*(_BYTE*)(result + 8) & 1) == 0)
		{
			result = sub_1403D57B0(a1 + 7120, &v11);
			v6 = *(_QWORD*)(a1 + 7152);
			if (v6)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 40i64))(v6, a2);
				if ((int)result >= 5)
				{
					if ((*(_BYTE*)(v5 + 8) & 4) != 0)
					{
						v7 = *(_QWORD*)(a1 + 7152);
						v12 = a2;
						v8 = (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 32i64))(v7, a2);
						v9 = (int*)&v12;
						v13 = v8;
					}
					else
					{
						result = sub_1403CAC00(a1, a2, &v12);
						if ((_DWORD)result)
							return result;
						v14 = a2;
						v9 = (int*)&v14;
						v15 = v12;
					}
					return sub_140032F50(a1 + 7120, (__int64)v10, v9);
				}
			}
		}
	}
	return result;
}
// 1403CADA0: using guessed type char var_28[40];

