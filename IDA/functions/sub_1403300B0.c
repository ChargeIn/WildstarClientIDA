//----- (00000001403300B0) ----------------------------------------------------
__int64 __fastcall sub_1403300B0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // rdx
	int* v7; // rax
	__int64 v8; // rcx

	*(_QWORD*)a1 = &off_140B647B0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = a3;
	*(_WORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 64) = 0x100000i64;
	*(_QWORD*)(a1 + 72) = 0x100000i64;
	v5 = sub_14018B280(0x100000i64, 0);
	v6 = *(_QWORD*)(a1 + 72);
	*(_DWORD*)(a1 + 104) = 1;
	*(_QWORD*)(a1 + 80) = v5;
	*(_QWORD*)(a1 + 96) = v5;
	*(_QWORD*)(a1 + 88) = (char*)v5 + v6;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = a2;
	sub_1400522F0((_QWORD*)(a1 + 128));
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_WORD*)(a1 + 184) = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	v7 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 216) = v7;
	*(_BYTE*)v7 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 16i64) = *(_QWORD*)(a1 + 216);
	*(_QWORD*)(*(_QWORD*)(a1 + 216) + 24i64) = *(_QWORD*)(a1 + 216);
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	sub_140333850(
		v8,
		(__int64(__fastcall***)(_QWORD, __int64, __int64, __int64(__fastcall*)(_QWORD), __int64 (*)(), __int64(__fastcall*)(__int64, __int64, __int64), _DWORD))a1);
	return a1;
}
// 1403301AC: variable 'v8' is possibly undefined
// 140B647B0: using guessed type __int64 (__fastcall *off_140B647B0)(int, int, int, int, __int64, __int64, int);

