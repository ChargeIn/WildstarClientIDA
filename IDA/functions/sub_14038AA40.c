//----- (000000014038AA40) ----------------------------------------------------
__int64 __fastcall sub_14038AA40(__int64 a1, __int64 a2)
{
	int v4; // eax
	int v5; // edx
	int v6; // r8d
	__int64* v7; // rdx
	__int64 v8; // rdx
	int v9; // eax
	_QWORD* v10; // rdx
	__int64 v11; // rax

	*(_QWORD*)a1 = off_140B65D10;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 9;
	*(_QWORD*)(a1 + 864) = 0i64;
	*(_QWORD*)(a1 + 872) = 0i64;
	*(_QWORD*)(a1 + 888) = 0i64;
	*(_QWORD*)(a1 + 896) = 0i64;
	*(_DWORD*)(a1 + 848) = 1414420037;
	*(_DWORD*)(a1 + 916) = 0;
	*(_QWORD*)(a1 + 952) = 0i64;
	*(_QWORD*)(a1 + 1008) = 0i64;
	*(_QWORD*)(a1 + 1016) = 0i64;
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1048) = 0i64;
	*(_QWORD*)(a1 + 1056) = 0i64;
	*(_QWORD*)(a1 + 1064) = 0i64;
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_QWORD*)(a1 + 1096) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1128) = 0i64;
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1144) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 920) = 1;
	v4 = (int)*(float*)&xmmword_140C784E0;
	v5 = (int)*(float*)&xmmword_140C784F0;
	v6 = (int)*((float*)&xmmword_140C784F0 + 1);
	*(_DWORD*)(a1 + 928) = (int)*((float*)&xmmword_140C784E0 + 1);
	*(_DWORD*)(a1 + 924) = v4;
	*(_DWORD*)(a1 + 932) = v5;
	*(_DWORD*)(a1 + 936) = v6;
	*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 924);
	*(_DWORD*)(a1 + 836) = *(_DWORD*)(a1 + 928);
	*(_DWORD*)(a1 + 840) = *(_DWORD*)(a1 + 932);
	*(_DWORD*)(a1 + 844) = *(_DWORD*)(a1 + 936);
	*(_QWORD*)(a1 + 944) = 0i64;
	*(_OWORD*)(a1 + 144) = xmmword_140B7B240;
	*(_OWORD*)(a1 + 160) = 0i64;
	v7 = (__int64*)(*(_QWORD*)(a1 + 16) + 5568i64);
	*(_QWORD*)(a1 + 176) = 1065353216i64;
	*(_QWORD*)(a1 + 184) = 1065353216i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	sub_1407C2990((__int64**)(a1 + 200), v7, 3);
	*(_QWORD*)(a1 + 224) = 1i64;
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 232) = 0;
	v9 = *(_DWORD*)(a2 + 848) - 1;
	v10 = (_QWORD*)(v8 + 5248);
	*(_QWORD*)(a1 + 976) = 0i64;
	*(_QWORD*)(a1 + 984) = 0i64;
	*(_QWORD*)(a1 + 992) = 0i64;
	*(_DWORD*)(a1 + 1000) = 1;
	*(_DWORD*)(a1 + 960) = v9;
	*(_DWORD*)(a1 + 1004) = 1;
	if (!*(_QWORD*)(a1 + 1008))
	{
		*(_QWORD*)(a1 + 1008) = v10;
		*(_QWORD*)(a1 + 1016) = *v10;
		*v10 = a1;
		v11 = *(_QWORD*)(a1 + 1016);
		if (v11)
			*(_QWORD*)(v11 + 1008) = a1 + 1016;
	}
	++* (_QWORD*)(*(_QWORD*)(a1 + 16) + 5240i64);
	return a1;
}
// 140B65D10: using guessed type __int64 (__fastcall *off_140B65D10[14])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;

