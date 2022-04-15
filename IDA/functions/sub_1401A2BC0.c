//----- (00000001401A2BC0) ----------------------------------------------------
int __fastcall sub_1401A2BC0(unsigned __int16* a1)
{
	__int64 v2; // r8
	unsigned __int64 v3; // rax
	unsigned __int16 v4; // dx
	__int64 v5; // rax
	unsigned __int64 v6; // rbx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx
	__int64 v12[2]; // [rsp+20h] [rbp-138h] BYREF
	CHAR v13[272]; // [rsp+30h] [rbp-128h] BYREF

	sub_14003D8F0(v12, &qword_140C67400);
	v2 = -1i64;
	if (a1)
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			if (*a1 >= 0x80u)
			{
				if (v4 >= 0x1000u)
				{
					if (v3 >= 0x102)
						goto LABEL_24;
					v13[v3] = (v4 >> 12) | 0xE0;
					v13[v3 + 1] = (v4 >> 6) & 0x3F | 0x80;
					v3 += 3i64;
					*((_BYTE*)&v12[1] + v3 + 7) = *(_BYTE*)a1 & 0x3F | 0x80;
				}
				else
				{
					if (v3 >= 0x103)
						goto LABEL_24;
					v13[v3] = (v4 >> 6) | 0xC0;
					v3 += 2i64;
					*((_BYTE*)&v12[1] + v3 + 7) = *(_BYTE*)a1 & 0x3F | 0x80;
				}
			}
			else
			{
				if (v3 >= 0x104)
					goto LABEL_24;
				v13[v3++] = v4;
			}
			if (!v4)
				break;
			++a1;
			--v2;
		} while (v2);
		v5 = sub_1407E13F0(v13, byte_1409E215C);
		v6 = v5;
		if (v5)
		{
			sub_1407E1088(dword_140C676D0, qword_140C776D0, 1ui64, v5);
			if (qword_140C776E0 > (unsigned __int64)qword_140C776D0)
			{
				sub_1407E1088((int*)"\n...\n\n", 6ui64, 1ui64, v6);
				v7 = qword_140C776D8;
				if (qword_140C776D8 < (unsigned __int64)qword_140C776E0)
				{
					while (*((_BYTE*)&dword_140C674A0 + v7 + 560) != 10)
					{
						if (++v7 >= qword_140C776E0)
							goto LABEL_22;
					}
					for (; v7 < qword_140C776E0; ++v7)
					{
						if (*((_BYTE*)&dword_140C674A0 + v7 + 560) != 10)
							break;
					}
				}
			LABEL_22:
				sub_1407E1088((int*)((char*)&dword_140C674A0 + v7 + 560), qword_140C776E0 - v7, 1ui64, v6);
				sub_1407E1088(
					(int*)((char*)&dword_140C674A0 + qword_140C776D0 + 560),
					qword_140C776D8 - qword_140C776D0,
					1ui64,
					v6);
			}
			sub_1407E089C(v6);
		}
	}
LABEL_24:
	v8 = v12[0];
	v9 = *(_QWORD*)(v12[0] + 8);
	if (v9 <= 1)
	{
		*(_DWORD*)v12[0] = 0;
		_InterlockedExchange64((volatile __int64*)(v8 + 8), 0i64);
		v9 = *(_QWORD*)(v8 + 16);
		if (v9)
		{
			if (!*(_QWORD*)(v8 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v8 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v12[0] + 8);
	}
	return v9;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 1409E215C: using guessed type _BYTE byte_1409E215C[40];
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C674A0: using guessed type int dword_140C674A0;
// 140C676D0: using guessed type int dword_140C676D0[16384];
// 140C776D0: using guessed type __int64 qword_140C776D0;
// 140C776D8: using guessed type __int64 qword_140C776D8;
// 140C776E0: using guessed type __int64 qword_140C776E0;

