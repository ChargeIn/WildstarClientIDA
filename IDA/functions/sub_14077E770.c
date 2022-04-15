//----- (000000014077E770) ----------------------------------------------------
void __fastcall sub_14077E770(__int64 a1)
{
	_DWORD* v2; // rdi
	__int64 v3; // rax
	unsigned int* v4; // rdx
	int v5; // eax

	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	v2 = *(_DWORD**)(qword_140C65898 + 25744);
	if (!v2
		|| !v2[852]
		|| v2[32] == 23
		|| v2[148]
		|| v2[149]
		|| (v3 = sub_1403D90D0(qword_140C65898, v2[66]), (v4 = (unsigned int*)v3) == 0i64)
		|| (_DWORD*)v3 == v2
		|| (v5 = *(_DWORD*)(v3 + 128), v5 == 23)
		|| v4[148]
		|| v4[149]
		|| v5 == 20
		&& !v2[67]
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 72i64))(
			qword_140C65B70,
			(unsigned int)v2[2],
			v4[2]))
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
}
// 14077E827: conditional instruction was optimized away because rdi.8!=0
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

