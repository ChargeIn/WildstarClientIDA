//----- (0000000140841750) ----------------------------------------------------
__int64 __fastcall sub_140841750(__int64 a1, int a2)
{
	int v2; // esi
	unsigned int v4; // edi
	__int64 result; // rax
	int v6; // r14d
	__int64 v7; // r9
	__int64* v8; // rax
	int* v9; // rax
	__int64 v10; // rbx
	__int64* v11; // rax
	_QWORD* v12; // rax
	unsigned int v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h] BYREF
	unsigned int v15; // [rsp+2Ch] [rbp-1Ch]
	int v16; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

	v2 = a2;
	v4 = 1;
	if (!a2)
		return 1i64;
	do
	{
		if (v4 != 1)
			break;
		result = sub_14083C5D0(a1, &v14, 8u);
		v4 = result;
		if ((_DWORD)result != 1)
			return result;
		v6 = 0;
		v2 -= 8;
		if (v15)
		{
			do
			{
				v4 = sub_14083C5D0(a1, (int*)&v17, 4u);
				if (v4 != 1)
					break;
				v2 -= 4;
				v4 = sub_14083C5D0(a1, &v16, 1u);
				if (v4 != 1)
					break;
				--v2;
				v8 = *(__int64**)(a1 + 8i64 * (v17 % 0x1F) + 2040);
				if (!v8)
					goto LABEL_10;
				while (*((_DWORD*)v8 + 2) != v17)
				{
					v8 = (__int64*)*v8;
					if (!v8)
						goto LABEL_10;
				}
				if (v8 == (__int64*)-16i64)
				{
				LABEL_10:
					v9 = (int*)sub_1408819F0(dword_140C10F20, (unsigned __int8)v16 + 5);
					v10 = (__int64)v9;
					if (!v9)
					{
						v4 = 52;
						break;
					}
					*((_BYTE*)v9 + (unsigned __int8)v16) = 46;
					*((_BYTE*)v9 + (unsigned __int8)v16 + 1) = 98;
					*((_BYTE*)v9 + (unsigned __int8)v16 + 2) = 110;
					*((_BYTE*)v9 + (unsigned __int8)v16 + 3) = 107;
					*((_BYTE*)v9 + (unsigned __int8)v16 + 4) = 0;
					v4 = sub_14083C5D0(a1, v9, (unsigned __int8)v16);
					if (v4 != 1)
						goto LABEL_25;
					v2 -= (unsigned __int8)v16;
					v11 = *(__int64**)(a1 + 8i64 * (v17 % 0x1F) + 2040);
					if (!v11)
						goto LABEL_19;
					while (*((_DWORD*)v11 + 2) != v17)
					{
						v11 = (__int64*)*v11;
						if (!v11)
							goto LABEL_19;
					}
					v12 = v11 + 2;
					if (!v12)
						LABEL_19:
					v12 = (_QWORD*)sub_14083E5E0((int*)(a1 + 2032), v17, v17 % 0x1F);
					if (!v12)
					{
						v4 = 52;
					LABEL_25:
						sub_140881720(dword_140C10F20, v10);
						break;
					}
					*v12 = v10;
				}
				else
				{
					sub_14083CB00(a1, (unsigned __int8)v16, &v13, v7);
					v2 -= (unsigned __int8)v16;
				}
			} while (++v6 < v15);
		}
	} while (v2);
	return v4;
}
// 140841907: variable 'v7' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

