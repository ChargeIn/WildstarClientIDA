//----- (00000001408EFB20) ----------------------------------------------------
__int64 __fastcall sub_1408EFB20(__int64 a1, int* a2)
{
	int v2; // edi
	int v5; // r14d
	int v6; // ebx
	int v7; // eax
	int v8; // ecx
	int v9; // r9d
	int v10; // eax
	int v11; // r8d
	unsigned int v12; // ebx
	__int64 v13; // r11
	__int16 v14; // r10
	__int64 v15; // rsi
	int v16; // r10d

	v2 = *(_DWORD*)(a1 + 12);
	v5 = 0;
	v6 = 0;
	v7 = sub_1408EC120(a2, v2);
	v8 = *(_DWORD*)(a1 + 24);
	v9 = v7;
	v10 = v7 & 1;
	v11 = 0;
	if (v8 != 1)
	{
		if (v8 == 2)
		{
			if (*(_DWORD*)(a1 + 28) == 1)
			{
				if (v2 > 0)
				{
					while (1)
					{
						LOWORD(v6) = *(_WORD*)(*(_QWORD*)(a1 + 16) + 2i64 * (unsigned int)(v10 + 2 * v6));
						if ((v6 & 0x8000) != 0)
							break;
						v9 >>= 1;
						++v11;
						v10 = v9 & 1;
						if (v11 >= v2)
						{
							v12 = v6 & 0x7FFF;
							goto LABEL_34;
						}
					}
				}
				goto LABEL_15;
			}
			v15 = *(_QWORD*)(a1 + 16);
			if (v2 > 0)
			{
				while (1)
				{
					v16 = *(unsigned __int16*)(v15 + 2i64 * (unsigned int)(v10 + v6));
					if ((v16 & 0x8000) != 0)
						break;
					v9 >>= 1;
					++v11;
					v6 = *(unsigned __int16*)(v15 + 2i64 * (unsigned int)(v10 + v6));
					v10 = v9 & 1;
					if (v11 >= v2)
						goto LABEL_33;
				}
				if (!v10 || (*(_WORD*)(v15 + 2i64 * (unsigned int)v6) & 0x8000) != 0)
					v5 = 1;
				v6 = (v16 << 16) | *(unsigned __int16*)(v15 + 2i64 * (unsigned int)(v5 + v10 + v6 + 1));
			}
		}
		else if (v2 > 0)
		{
			do
			{
				v6 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4i64 * (unsigned int)(v10 + 2 * v6));
				if (v6 < 0)
					break;
				v9 >>= 1;
				++v11;
				v10 = v9 & 1;
			} while (v11 < v2);
		}
	LABEL_33:
		v12 = v6 & 0x7FFFFFFF;
		goto LABEL_34;
	}
	if (*(_DWORD*)(a1 + 28) != 1)
	{
		v13 = *(_QWORD*)(a1 + 16);
		if (v2 > 0)
		{
			while (1)
			{
				v14 = *(unsigned __int8*)((unsigned int)(v10 + v6) + v13);
				if ((v14 & 0x80u) != 0)
					break;
				v9 >>= 1;
				++v11;
				v6 = *(unsigned __int8*)((unsigned int)(v10 + v6) + v13);
				v10 = v9 & 1;
				if (v11 >= v2)
				{
					v12 = v14 & 0x7FFF;
					goto LABEL_34;
				}
			}
			if (!v10 || *(char*)((unsigned int)v6 + v13) < 0)
				v5 = 1;
			LOWORD(v6) = (v14 << 8) | *(unsigned __int8*)((unsigned int)(v5 + v10 + v6 + 1) + v13);
		}
	LABEL_15:
		v12 = v6 & 0x7FFF;
		goto LABEL_34;
	}
	if (v2 > 0)
	{
		do
		{
			LOBYTE(v6) = *(_BYTE*)((unsigned int)(v10 + 2 * v6) + *(_QWORD*)(a1 + 16));
			if ((v6 & 0x80u) != 0)
				break;
			v9 >>= 1;
			++v11;
			v10 = v9 & 1;
		} while (v11 < v2);
	}
	v12 = v6 & 0x7F;
LABEL_34:
	sub_1408EC100((__int64)a2, v11 + 1);
	return v12;
}

