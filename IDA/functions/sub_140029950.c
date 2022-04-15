//----- (0000000140029950) ----------------------------------------------------
__int64 __fastcall sub_140029950(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	__int128* v4; // rdx
	__int64 v6; // rcx
	__int64 v7; // rsi
	__int64 v8; // rax
	__int128 v9; // xmm0
	int* v10; // rdx
	__int64 v11; // rcx
	__int128 v12; // xmm0

	v2 = *a2;
	v4 = (__int128*)((char*)a2 + 100);
	*(_QWORD*)a1 = v2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)((char*)v4 - 92);
	v6 = a1 + 100;
	*(_QWORD*)(v6 - 84) = *(_QWORD*)((char*)v4 - 84);
	v7 = 2i64;
	*(_QWORD*)(v6 - 76) = *(_QWORD*)((char*)v4 - 76);
	*(_QWORD*)(v6 - 68) = *(_QWORD*)((char*)v4 - 68);
	*(_QWORD*)(v6 - 60) = *(_QWORD*)((char*)v4 - 60);
	*(_QWORD*)(v6 - 52) = *(_QWORD*)((char*)v4 - 52);
	*(_QWORD*)(v6 - 44) = *(_QWORD*)((char*)v4 - 44);
	*(_QWORD*)(v6 - 36) = *(_QWORD*)((char*)v4 - 36);
	*(_WORD*)(v6 - 28) = *((_WORD*)v4 - 14);
	*(_DWORD*)(v6 - 24) = *((_DWORD*)v4 - 6);
	*(_DWORD*)(v6 - 20) = *((_DWORD*)v4 - 5);
	*(_DWORD*)(v6 - 16) = *((_DWORD*)v4 - 4);
	*(_DWORD*)(v6 - 12) = *((_DWORD*)v4 - 3);
	*(_DWORD*)(v6 - 8) = *((_DWORD*)v4 - 2);
	*(_DWORD*)(v6 - 4) = *((_DWORD*)v4 - 1);
	if ((((unsigned __int8)v6 | (unsigned __int8)v4) & 0xF) != 0)
	{
		sub_1407DB590((int*)v6, (int*)v4, 0x120ui64);
	}
	else
	{
		v8 = 2i64;
		do
		{
			v9 = *v4;
			v6 += 128i64;
			v4 += 8;
			*(_OWORD*)(v6 - 128) = v9;
			*(_OWORD*)(v6 - 112) = *(v4 - 7);
			*(_OWORD*)(v6 - 96) = *(v4 - 6);
			*(_OWORD*)(v6 - 80) = *(v4 - 5);
			*(_OWORD*)(v6 - 64) = *(v4 - 4);
			*(_OWORD*)(v6 - 48) = *(v4 - 3);
			*(_OWORD*)(v6 - 32) = *(v4 - 2);
			*(_OWORD*)(v6 - 16) = *(v4 - 1);
			--v8;
		} while (v8);
		*(_OWORD*)v6 = *v4;
		*(_OWORD*)(v6 + 16) = v4[1];
	}
	v10 = (int*)a2 + 97;
	v11 = a1 + 388;
	if ((((unsigned __int8)(a1 - 124) | (unsigned __int8)((_BYTE)a2 - 124)) & 0xF) != 0)
	{
		sub_1407DB590((int*)v11, v10, 0x120ui64);
	}
	else
	{
		do
		{
			v12 = *(_OWORD*)v10;
			v11 += 128i64;
			v10 += 32;
			*(_OWORD*)(v11 - 128) = v12;
			*(_OWORD*)(v11 - 112) = *((_OWORD*)v10 - 7);
			*(_OWORD*)(v11 - 96) = *((_OWORD*)v10 - 6);
			*(_OWORD*)(v11 - 80) = *((_OWORD*)v10 - 5);
			*(_OWORD*)(v11 - 64) = *((_OWORD*)v10 - 4);
			*(_OWORD*)(v11 - 48) = *((_OWORD*)v10 - 3);
			*(_OWORD*)(v11 - 32) = *((_OWORD*)v10 - 2);
			*(_OWORD*)(v11 - 16) = *((_OWORD*)v10 - 1);
			--v7;
		} while (v7);
		*(_OWORD*)v11 = *(_OWORD*)v10;
		*(_OWORD*)(v11 + 16) = *((_OWORD*)v10 + 1);
	}
	*(_DWORD*)(a1 + 676) = *((_DWORD*)a2 + 169);
	*(_DWORD*)(a1 + 680) = *((_DWORD*)a2 + 170);
	*(_DWORD*)(a1 + 684) = *((_DWORD*)a2 + 171);
	*(_DWORD*)(a1 + 688) = *((_DWORD*)a2 + 172);
	*(_DWORD*)(a1 + 692) = *((_DWORD*)a2 + 173);
	*(_DWORD*)(a1 + 696) = *((_DWORD*)a2 + 174);
	*(_DWORD*)(a1 + 700) = *((_DWORD*)a2 + 175);
	*(_DWORD*)(a1 + 704) = *((_DWORD*)a2 + 176);
	*(_DWORD*)(a1 + 708) = *((_DWORD*)a2 + 177);
	*(_DWORD*)(a1 + 712) = *((_DWORD*)a2 + 178);
	*(_DWORD*)(a1 + 716) = *((_DWORD*)a2 + 179);
	*(_DWORD*)(a1 + 720) = *((_DWORD*)a2 + 180);
	*(_DWORD*)(a1 + 724) = *((_DWORD*)a2 + 181);
	*(_DWORD*)(a1 + 728) = *((_DWORD*)a2 + 182);
	*(_DWORD*)(a1 + 732) = *((_DWORD*)a2 + 183);
	*(_DWORD*)(a1 + 736) = *((_DWORD*)a2 + 184);
	*(_DWORD*)(a1 + 740) = *((_DWORD*)a2 + 185);
	*(_DWORD*)(a1 + 744) = *((_DWORD*)a2 + 186);
	*(_DWORD*)(a1 + 748) = *((_DWORD*)a2 + 187);
	*(_DWORD*)(a1 + 752) = *((_DWORD*)a2 + 188);
	*(_DWORD*)(a1 + 756) = *((_DWORD*)a2 + 189);
	*(_DWORD*)(a1 + 760) = *((_DWORD*)a2 + 190);
	*(_DWORD*)(a1 + 764) = *((_DWORD*)a2 + 191);
	*(_DWORD*)(a1 + 768) = *((_DWORD*)a2 + 192);
	*(_DWORD*)(a1 + 772) = *((_DWORD*)a2 + 193);
	sub_140029C50((_QWORD*)(a1 + 776), (__int64)(a2 + 97));
	*(_QWORD*)(a1 + 808) = a2[101];
	return a1;
}

