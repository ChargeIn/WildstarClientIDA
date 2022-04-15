//----- (00000001400C2BD0) ----------------------------------------------------
__int64 __fastcall sub_1400C2BD0(__int64 a1, _QWORD* a2)
{
	__int64 v3; // r9
	__int64 v4; // r10
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdx

	*(_DWORD*)a1 = 2;
	*(_QWORD*)(a1 + 8) = a1;
	*(_QWORD*)(a1 + 16) = sub_1400C2D10;
	*(_QWORD*)(a1 + 24) = a1;
	*(_QWORD*)(a1 + 32) = sub_1400C2DE0;
	*(_QWORD*)(a1 + 168) = 0x718DA9074F2DEB91i64;
	v3 = a1 + 48;
	*(_QWORD*)(a1 + 40) = *a2;
	v4 = 4i64;
	*(_QWORD*)(a1 + 48) = a2[1];
	*(_QWORD*)(a1 + 56) = a2[2];
	*(_QWORD*)(a1 + 64) = a2[3];
	*(_QWORD*)(a1 + 72) = a2[4];
	*(_QWORD*)(a1 + 80) = a2[5];
	*(_QWORD*)(a1 + 88) = a2[6];
	*(_QWORD*)(a1 + 96) = a2[7];
	*(_QWORD*)(a1 + 104) = a2[8];
	*(_QWORD*)(a1 + 112) = a2[9];
	*(_QWORD*)(a1 + 120) = a2[10];
	*(_QWORD*)(a1 + 128) = a2[11];
	*(_QWORD*)(a1 + 136) = a2[12];
	*(_QWORD*)(a1 + 144) = a2[13];
	*(_QWORD*)(a1 + 152) = a2[14];
	*(_QWORD*)(a1 + 160) = a2[15];
	v5 = *(_QWORD*)(a1 + 168);
	do
	{
		v6 = *(_QWORD*)(v3 - 8);
		v3 += 32i64;
		v7 = 2860486313i64 * (v5 + v6);
		*(_QWORD*)(a1 + 168) = v7;
		v8 = 2860486313i64 * (*(_QWORD*)(v3 - 32) + v7);
		*(_QWORD*)(a1 + 168) = v8;
		v9 = 2860486313i64 * (v8 + *(_QWORD*)(v3 - 24));
		*(_QWORD*)(a1 + 168) = v9;
		v5 = 2860486313i64 * (v9 + *(_QWORD*)(v3 - 16));
		*(_QWORD*)(a1 + 168) = v5;
		--v4;
	} while (v4);
	return a1;
}

