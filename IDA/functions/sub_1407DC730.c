//----- (00000001407DC730) ----------------------------------------------------
void __fastcall sub_1407DC730(int* a1, __int64 a2)
{
	int* v3; // r8
	__int64 v4; // rax
	__int128 v5; // xmm1

	if (a2 && a1 && a1 != (int*)a2)
	{
		v3 = a1;
		if ((((unsigned __int8)a1 | (unsigned __int8)a2) & 0xF) != 0)
		{
			sub_1407DB590(a1, (int*)a2, 0x158ui64);
		}
		else
		{
			v4 = 2i64;
			do
			{
				*(_OWORD*)v3 = *(_OWORD*)a2;
				*((_OWORD*)v3 + 1) = *(_OWORD*)(a2 + 16);
				*((_OWORD*)v3 + 2) = *(_OWORD*)(a2 + 32);
				*((_OWORD*)v3 + 3) = *(_OWORD*)(a2 + 48);
				*((_OWORD*)v3 + 4) = *(_OWORD*)(a2 + 64);
				*((_OWORD*)v3 + 5) = *(_OWORD*)(a2 + 80);
				*((_OWORD*)v3 + 6) = *(_OWORD*)(a2 + 96);
				v5 = *(_OWORD*)(a2 + 112);
				v3 += 32;
				a2 += 128i64;
				*((_OWORD*)v3 - 1) = v5;
				--v4;
			} while (v4);
			*(_OWORD*)v3 = *(_OWORD*)a2;
			*((_OWORD*)v3 + 1) = *(_OWORD*)(a2 + 16);
			*((_OWORD*)v3 + 2) = *(_OWORD*)(a2 + 32);
			*((_OWORD*)v3 + 3) = *(_OWORD*)(a2 + 48);
			*((_OWORD*)v3 + 4) = *(_OWORD*)(a2 + 64);
			*((_QWORD*)v3 + 10) = *(_QWORD*)(a2 + 80);
		}
		*a1 = 0;
		sub_1407E6734((__int64)a1);
	}
}

