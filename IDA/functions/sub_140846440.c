//----- (0000000140846440) ----------------------------------------------------
void __fastcall sub_140846440(__int64* a1, unsigned __int8 a2, int a3, int a4)
{
	__int64 v6; // rax
	int v7; // esi
	_DWORD* v8; // rdx
	__int64* v9; // r15
	_DWORD* v10; // rax
	_QWORD* v11; // r14
	__int64 i; // rdi
	_DWORD* v13; // rdi
	_DWORD* v14; // rax
	unsigned __int8 v15; // cl
	_QWORD* v16; // rdx

	v6 = 3 * (a2 + 1i64);
	v7 = a3 | (a4 << 16);
	v8 = (_DWORD*)a1[3 * a2 + 4];
	v9 = &a1[v6];
	v10 = (_DWORD*)*v9;
	if ((_DWORD*)*v9 != v8)
	{
		do
		{
			if (*v10 == v7)
				break;
			v10 += 4;
		} while (v10 != v8);
		if (v10 != v8)
		{
			v11 = v10 + 2;
			if (v10 != (_DWORD*)-8i64)
			{
				for (i = *a1; i != a1[1]; i += 16i64)
					sub_140871540(*(_BYTE**)(i + 8), a2, v7);
				if (*v11)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 88i64))(*v11);
					(*(void(__fastcall**)(_QWORD, __int64(__fastcall***)()))(*(_QWORD*)*v11 + 8i64))(*v11, &off_140C10F70);
					*v11 = 0i64;
				}
				v13 = (_DWORD*)*v9;
				v14 = (_DWORD*)v9[1];
				if ((_DWORD*)*v9 != v14)
				{
					do
					{
						if (*v13 == v7)
							break;
						v13 += 4;
					} while (v13 != v14);
					if (v13 != v14)
					{
						if (v13 < v14 - 4)
							qmemcpy(
								v13,
								v13 + 4,
								8
								* (((((unsigned __int64)((char*)(v14 - 4) - (char*)v13 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
						v9[1] -= 16i64;
					}
				}
				*((_WORD*)a1 + 68) = 0;
				v15 = 0;
				v16 = a1 + 3;
				do
				{
					if ((unsigned int)((__int64)(v16[1] - *v16) >> 4))
					{
						*((_BYTE*)a1 + 137) = v15 + 1;
						*((_BYTE*)a1 + 136) |= 1 << v15;
					}
					++v15;
					v16 += 3;
				} while (v15 < 4u);
				sub_140843F60();
			}
		}
	}
}
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

