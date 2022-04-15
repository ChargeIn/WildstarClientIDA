//----- (00000001405697B0) ----------------------------------------------------
__int64 __fastcall sub_1405697B0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx
	__int64 v5; // rdx
	int* v6; // rax
	__int64 v7; // rcx
	int* v8; // rdx
	__int64 v9; // rcx
	__int128 v10; // xmm0

	v3 = (_QWORD*)(a1 + 8);
	v5 = 0i64;
	v3[3] = 0i64;
	v3[2] = 0i64;
	v3[12] = 0i64;
	v3[11] = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_DWORD*)(a1 + 120) = 0;
	*(_QWORD*)a1 = off_140B6C708;
	*(_QWORD*)(a1 + 128) = a2;
	if (a2)
		v5 = a2 + 8;
	sub_1403D8790((__int64)v3, v5);
	v6 = sub_14018B280(432i64, 8u);
	v7 = *(_QWORD*)(a1 + 128);
	*(_DWORD*)(a1 + 120) = 1;
	*(_QWORD*)(a1 + 112) = v6;
	v8 = *(int**)(v7 + 112);
	if ((((unsigned __int8)v6 | (unsigned __int8)v8) & 0xF) != 0)
	{
		sub_1407DB590(v6, v8, 0x1B0ui64);
		return a1;
	}
	else
	{
		v9 = 3i64;
		do
		{
			v10 = *(_OWORD*)v8;
			v6 += 32;
			v8 += 32;
			*((_OWORD*)v6 - 8) = v10;
			*((_OWORD*)v6 - 7) = *((_OWORD*)v8 - 7);
			*((_OWORD*)v6 - 6) = *((_OWORD*)v8 - 6);
			*((_OWORD*)v6 - 5) = *((_OWORD*)v8 - 5);
			*((_OWORD*)v6 - 4) = *((_OWORD*)v8 - 4);
			*((_OWORD*)v6 - 3) = *((_OWORD*)v8 - 3);
			*((_OWORD*)v6 - 2) = *((_OWORD*)v8 - 2);
			*((_OWORD*)v6 - 1) = *((_OWORD*)v8 - 1);
			--v9;
		} while (v9);
		*(_OWORD*)v6 = *(_OWORD*)v8;
		*((_OWORD*)v6 + 1) = *((_OWORD*)v8 + 1);
		*((_OWORD*)v6 + 2) = *((_OWORD*)v8 + 2);
		return a1;
	}
}
// 140B6C708: using guessed type __int64 (__fastcall *off_140B6C708[2])();

