//----- (0000000140412570) ----------------------------------------------------
__int64 __fastcall sub_140412570(__int64 a1, int* a2, int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // ebx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int128 v11; // xmm0
	__int64 v12; // rax

	v4 = *(_DWORD*)(a1 + 1176);
	v5 = 0;
	if (a4 >= v4)
	{
		if (a2)
		{
			v9 = a1 + 32;
			v5 = 1;
			if ((((unsigned __int8)v9 | (unsigned __int8)a2) & 0xF) != 0)
			{
				sub_1407DB590((int*)v9, a2, 0x138ui64);
				*(_DWORD*)(a1 + 1176) = a4;
			}
			else
			{
				v10 = 2i64;
				do
				{
					v11 = *(_OWORD*)a2;
					v9 += 128i64;
					a2 += 32;
					*(_OWORD*)(v9 - 128) = v11;
					*(_OWORD*)(v9 - 112) = *((_OWORD*)a2 - 7);
					*(_OWORD*)(v9 - 96) = *((_OWORD*)a2 - 6);
					*(_OWORD*)(v9 - 80) = *((_OWORD*)a2 - 5);
					*(_OWORD*)(v9 - 64) = *((_OWORD*)a2 - 4);
					*(_OWORD*)(v9 - 48) = *((_OWORD*)a2 - 3);
					*(_OWORD*)(v9 - 32) = *((_OWORD*)a2 - 2);
					*(_OWORD*)(v9 - 16) = *((_OWORD*)a2 - 1);
					--v10;
				} while (v10);
				*(_OWORD*)v9 = *(_OWORD*)a2;
				*(_OWORD*)(v9 + 16) = *((_OWORD*)a2 + 1);
				*(_OWORD*)(v9 + 32) = *((_OWORD*)a2 + 2);
				v12 = *((_QWORD*)a2 + 6);
				*(_DWORD*)(a1 + 1176) = a4;
				*(_QWORD*)(v9 + 48) = v12;
			}
		}
		else if (a4 == 6 && v4)
		{
			v5 = 1;
			*(_DWORD*)(a1 + 1176) = 0;
		}
	}
	if (a3)
		sub_140412AD0(a1);
	return v5;
}

