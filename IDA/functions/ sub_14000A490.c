//----- (000000014000A490) ----------------------------------------------------
__int64 __fastcall sub_14000A490(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int v4; // edx

	sub_140251810(a1);
	*(_QWORD*)a1 = off_140B55120;
	*(_QWORD*)(a1 + 256) = off_140B55100;
	*(_QWORD*)(a1 + 264) = off_140B550F8;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 296) = 0;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 5552) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 5608) = 0i64;
	*(_QWORD*)(a1 + 5600) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 16i64) = *(_QWORD*)(a1 + 5600);
	*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 24i64) = *(_QWORD*)(a1 + 5600);
	*(_QWORD*)(a1 + 5672) = 0x718DA9074F2DEB91i64;
	*(_QWORD*)(a1 + 5680) = 0x718DA9074F2DEB91i64;
	sub_140019600((_QWORD*)(a1 + 5816));
	*(_QWORD*)(a1 + 5856) = 0i64;
	*(_QWORD*)(a1 + 5872) = 0i64;
	*(_QWORD*)(a1 + 5880) = 0i64;
	*(_QWORD*)(a1 + 5888) = 0i64;
	*(_QWORD*)(a1 + 5912) = 0i64;
	*(_QWORD*)(a1 + 5952) = 0i64;
	*(_QWORD*)(a1 + 5944) = 0i64;
	*(_QWORD*)(a1 + 5968) = 0i64;
	*(_QWORD*)(a1 + 5960) = 0i64;
	*(_DWORD*)(a1 + 304) = 0;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_DWORD*)(a1 + 344) = 0;
	*(_QWORD*)(a1 + 5528) = 0i64;
	*(_QWORD*)(a1 + 5536) = 0i64;
	*(_QWORD*)(a1 + 5544) = 0i64;
	*(_QWORD*)(a1 + 5624) = 0i64;
	*(_QWORD*)(a1 + 5632) = 0i64;
	*(_QWORD*)(a1 + 5640) = 0i64;
	*(_QWORD*)(a1 + 5648) = 0i64;
	*(_QWORD*)(a1 + 5656) = 0i64;
	*(_DWORD*)(a1 + 5664) = 0;
	*(_QWORD*)(a1 + 5688) = 0i64;
	*(_QWORD*)(a1 + 5696) = 0i64;
	sub_1407E4830((int*)(a1 + 348), 0i64, 0x143Cui64);
	v3 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 5712) = 0i64;
	*(_QWORD*)(a1 + 5720) = 0i64;
	*(_QWORD*)(a1 + 5728) = 0i64;
	*(_QWORD*)(a1 + 5744) = 0i64;
	*(_QWORD*)(a1 + 5736) = 0i64;
	*(_QWORD*)(a1 + 5752) = 0i64;
	*(_QWORD*)(a1 + 5760) = 0i64;
	*(_DWORD*)(a1 + 5772) = 0;
	*(_QWORD*)(a1 + 5776) = 0i64;
	*(_DWORD*)(a1 + 5784) = 3;
	*(_QWORD*)(a1 + 5792) = 0i64;
	*(_QWORD*)(a1 + 5704) = 0i64;
	v4 = dword_140C3B3F0;
	if (*v3 < dword_140C3B3F0)
		v4 = *v3;
	sub_14001A820((__int64)&off_140C3B3E0, v4, 1500.0);
	*(_DWORD*)(a1 + 5768) = 2;
	*(_DWORD*)(a1 + 5800) = 0;
	*(_QWORD*)(a1 + 5576) = 0i64;
	*(_QWORD*)(a1 + 5584) = 0i64;
	*(_QWORD*)(a1 + 5864) = 0i64;
	*(_QWORD*)(a1 + 5920) = 0i64;
	*(_QWORD*)(a1 + 5928) = 0i64;
	*(_QWORD*)(a1 + 5936) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 5804) = 1i64;
	*(_QWORD*)(a1 + 5680) = 0x718DA9074F2DEB91i64
		* (2860486313i64 * (*(_QWORD*)(a1 + 5680) + 0x5B88D61139619662i64) + 16042)
		+ 0x64F77F4AB4E81A0i64;
	*(_QWORD*)(a1 + 5896) = 0i64;
	*(_DWORD*)(a1 + 5904) = 0;
	return a1;
}
// 140B550F8: using guessed type __int64 (__fastcall *off_140B550F8[3])();
// 140B55100: using guessed type __int64 (__fastcall *off_140B55100[2])();
// 140B55120: using guessed type __int64 (__fastcall *off_140B55120[13])();
// 140C3B3E0: using guessed type __int64 (__fastcall *off_140C3B3E0)();
// 140C3B3F0: using guessed type int dword_140C3B3F0;
// 140C63750: using guessed type __int64 qword_140C63750;

