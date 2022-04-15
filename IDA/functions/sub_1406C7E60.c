#include "../winhttp.h"

//----- (00000001406C7E60) ----------------------------------------------------
char __fastcall sub_1406C7E60(__int64 a1, float a2)
{
	unsigned int v2; // edx
	void(__fastcall * **v4)(_QWORD, __int64); // rax
	void(__fastcall * **v5)(_QWORD, __int64); // rdi
	__int64 v6; // rbp
	bool v7; // zf
	__int64 v8; // rax
	int v9; // eax
	unsigned __int64 v10; // rcx
	__m128i* v11; // r8
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdi
	unsigned int v15; // edx
	__int128 v17; // [rsp+30h] [rbp-58h] BYREF

	v2 = *(_DWORD*)(a1 + 708);
	v17 = xmmword_140B7B240;
	sub_1401429A0(qword_140C63678, v2);
	*(_DWORD*)(a1 + 708) = sub_140141F10(qword_140C63678, (__m128*) & v17);
	v4 = sub_1406C5440(a1);
	v5 = v4;
	if (v4)
	{
		((void(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v4)[6])(v4);
		v6 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v5)[15])(v5);
		if (*(_DWORD*)(v6 + 152))
		{
			if (*(float*)(a1 + 1592) != 1.0 || (float)2.0 != *(float*)(a1 + 1596))
			{
				v7 = *(float*)(a1 + 1584) == 1.0;
				*(_DWORD*)(a1 + 1592) = 1065353216;
				if (v7)
					*(_DWORD*)(a1 + 1596) = 0;
				else
					*(float*)(a1 + 1596) = 2.0;
				*(_DWORD*)(a1 + 1576) = dword_140C636A8;
			}
			v8 = *(_QWORD*)(a1 + 1760);
			*(_DWORD*)(a1 + 2144) = dword_140C63664;
			(*(void(__fastcall**)(__int64, void*))(v8 + 8))(a1 + 1760, &unk_1409F76EC);
			if (*(float*)(a1 + 1784) != 0.0 || (float)1.0 != *(float*)(a1 + 1788))
			{
				v7 = *(float*)(a1 + 1776) == 0.0;
				*(_DWORD*)(a1 + 1784) = 0;
				if (v7)
				{
					v9 = dword_140C636A8;
					*(_DWORD*)(a1 + 1788) = 0;
					*(_DWORD*)(a1 + 1768) = v9;
				}
				else
				{
					*(_DWORD*)(a1 + 1768) = dword_140C636A8;
					*(float*)(a1 + 1788) = 1.0;
				}
			}
		}
		else if ((**(float(__fastcall***)(__int64))(a1 + 1568))(a1 + 1568) == 1.0)
		{
			sub_1400F9C30(a1 + 1568, 1.0, 2.0);
		}
		if (*(_DWORD*)(v6 + 156))
		{
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1600) + 8i64))(a1 + 1600, &unk_1409F75CC);
			if (*(float*)(a1 + 1624) != 0.0 || (float)1.0 != *(float*)(a1 + 1628))
			{
				v7 = *(float*)(a1 + 1616) == 0.0;
				*(_DWORD*)(a1 + 1624) = 0;
				if (v7)
					*(_DWORD*)(a1 + 1628) = 0;
				else
					*(float*)(a1 + 1628) = 1.0;
				*(_DWORD*)(a1 + 1608) = dword_140C636A8;
			}
			*(_DWORD*)(a1 + 2000) = dword_140C63664;
		}
		if (*(_QWORD*)(v6 + 232))
		{
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1632) + 8i64))(a1 + 1632, &unk_1409F75EC);
			if (*(float*)(a1 + 1656) != 0.0 || (float)1.0 != *(float*)(a1 + 1660))
			{
				v7 = *(float*)(a1 + 1648) == 0.0;
				*(_DWORD*)(a1 + 1656) = 0;
				if (v7)
					*(_DWORD*)(a1 + 1660) = 0;
				else
					*(float*)(a1 + 1660) = 1.0;
				*(_DWORD*)(a1 + 1640) = dword_140C636A8;
			}
			v10 = *(_QWORD*)(*(_QWORD*)(v6 + 232) + 8i64);
			if (v10)
			{
				if (v10 <= qword_140C3FE70)
					v11 = (__m128i*)(v10 + qword_140C3FE68);
				else
					v11 = 0i64;
			}
			else
			{
				v11 = 0i64;
			}
			v12 = *(_QWORD*)(a1 + 32);
			if (v12)
				sub_140109710((__int64*)(a1 + 1848), v12 + 240, v11, 0);
			*(_DWORD*)(a1 + 1860) = *(_DWORD*)(*(_QWORD*)(v6 + 232) + 32i64);
		}
		if (*(_DWORD*)(v6 + 168))
		{
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1664) + 8i64))(a1 + 1664, &unk_1409F7604);
			if (*(float*)(a1 + 1688) != 0.0 || (float)1.0 != *(float*)(a1 + 1692))
			{
				v7 = *(float*)(a1 + 1680) == 0.0;
				*(_DWORD*)(a1 + 1688) = 0;
				if (v7)
					*(_DWORD*)(a1 + 1692) = 0;
				else
					*(float*)(a1 + 1692) = 1.0;
				*(_DWORD*)(a1 + 1672) = dword_140C636A8;
			}
			*(_DWORD*)(a1 + 2048) = dword_140C63664;
		}
		if (*(_DWORD*)(v6 + 164))
		{
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1728) + 8i64))(a1 + 1728, &unk_1409F7624);
			if (*(float*)(a1 + 1752) != 0.0 || (float)1.0 != *(float*)(a1 + 1756))
			{
				v7 = *(float*)(a1 + 1744) == 0.0;
				*(_DWORD*)(a1 + 1752) = 0;
				if (v7)
					*(_DWORD*)(a1 + 1756) = 0;
				else
					*(float*)(a1 + 1756) = 1.0;
				*(_DWORD*)(a1 + 1736) = dword_140C636A8;
			}
		}
		if (*(_DWORD*)(v6 + 160))
		{
			(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1696) + 8i64))(a1 + 1696, &unk_1409F76DC);
			if (*(float*)(a1 + 1720) != 0.0 || (float)1.0 != *(float*)(a1 + 1724))
			{
				v7 = *(float*)(a1 + 1712) == 0.0;
				*(_DWORD*)(a1 + 1720) = 0;
				if (v7)
					*(_DWORD*)(a1 + 1724) = 0;
				else
					*(float*)(a1 + 1724) = 1.0;
				*(_DWORD*)(a1 + 1704) = dword_140C636A8;
			}
		}
		v13 = *(_QWORD*)(a1 + 32);
		if (v13)
			sub_140109710((__int64*)(a1 + 1800), v13 + 240, *(__m128i**)(v6 + 8), 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, *(_QWORD*)(v6 + 40));
		sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 708));
		*(_DWORD*)(a1 + 708) = sub_140141F10(qword_140C63678, (__m128*)(v6 + 192));
	}
	else if (*(_QWORD*)(a1 + 32))
	{
		v14 = *(_QWORD*)(a1 + 1800);
		if (v14)
		{
			if (!sub_14002C740(a1 + 1816, word_1409F770C))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 1800) = 0i64;
			}
		}
	}
	if ((*(_BYTE*)(a1 + 28) & 8) == 0)
	{
		v15 = *(_DWORD*)(a1 + 708);
		v17 = xmmword_140B7AD40;
		sub_1401429A0(qword_140C63678, v15);
		*(_DWORD*)(a1 + 708) = sub_140141F10(qword_140C63678, (__m128*) & v17);
	}
	return sub_140131130(a1, a2);
}
// 1409F770C: using guessed type _WORD word_1409F770C[2];
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C636A8: using guessed type int dword_140C636A8;

