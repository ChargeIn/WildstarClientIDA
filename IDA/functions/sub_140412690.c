//----- (0000000140412690) ----------------------------------------------------
__int64 __fastcall sub_140412690(__int64 a1, int* a2, int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // esi
	int* v7; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	__int128 v12; // xmm0
	__int128 v13; // xmm0

	v4 = *(_DWORD*)(a1 + 1180);
	v5 = 0;
	v7 = a2;
	if (a4 >= v4)
	{
		if (a2)
		{
			v10 = a1 + 344;
			v5 = 1;
			sub_1407E4830((int*)(a1 + 344), 0i64, 0x190ui64);
			sub_1407E4830((int*)v10, 0i64, 0x90ui64);
			*(_QWORD*)v10 = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 8) = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 16) = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 24) = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 32) = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 40) = 0xC5000000C5i64;
			*(_QWORD*)(v10 + 48) = 0xC5000000C5i64;
			*(_DWORD*)(v10 + 56) = 197;
			if ((((unsigned __int8)v10 | (unsigned __int8)v7) & 0xF) != 0)
			{
				sub_1407DB590((int*)v10, v7, 0x90ui64);
				*(_DWORD*)(a1 + 1180) = a4;
			}
			else
			{
				v11 = 1i64;
				do
				{
					v12 = *(_OWORD*)v7;
					v10 += 128i64;
					v7 += 32;
					*(_OWORD*)(v10 - 128) = v12;
					*(_OWORD*)(v10 - 112) = *((_OWORD*)v7 - 7);
					*(_OWORD*)(v10 - 96) = *((_OWORD*)v7 - 6);
					*(_OWORD*)(v10 - 80) = *((_OWORD*)v7 - 5);
					*(_OWORD*)(v10 - 64) = *((_OWORD*)v7 - 4);
					*(_OWORD*)(v10 - 48) = *((_OWORD*)v7 - 3);
					*(_OWORD*)(v10 - 32) = *((_OWORD*)v7 - 2);
					*(_OWORD*)(v10 - 16) = *((_OWORD*)v7 - 1);
					--v11;
				} while (v11);
				v13 = *(_OWORD*)v7;
				*(_DWORD*)(a1 + 1180) = a4;
				*(_OWORD*)v10 = v13;
			}
		}
		else if (a4 == 6 && v4)
		{
			v5 = 1;
			*(_DWORD*)(a1 + 1180) = 0;
		}
	}
	if (a3)
		sub_140412AD0(a1);
	return v5;
}
// 140412AD0: using guessed type __int64 __fastcall sub_140412AD0(_QWORD);

