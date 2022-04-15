#include "../winhttp.h"

//----- (00000001403C9C00) ----------------------------------------------------
__int64 sub_1403C9C00()
{
	__int64 v0; // rbx
	__int64 v1; // rsi
	unsigned int i; // edi
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned int j; // edi
	__int64 v6; // rcx
	unsigned int k; // edi
	__int64 v8; // rcx
	unsigned int m; // edi
	__int64 v10; // rcx
	unsigned int n; // edi
	__int64 v12; // rcx
	unsigned int ii; // edi
	__int64 v14; // rcx
	__int64 v15; // rcx

	v0 = qword_140C65898;
	v1 = 0i64;
	for (i = 0; i < *(_DWORD*)(v0 + 164); ++i)
	{
		result = *(_QWORD*)(v0 + 176);
		v4 = *(_QWORD*)(result + 8i64 * i);
		if (v4)
		{
			result = *(_QWORD*)(v4 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v4);
		}
	}
	for (j = 0; j < *(_DWORD*)(v0 + 188); ++j)
	{
		result = *(_QWORD*)(v0 + 200);
		v6 = *(_QWORD*)(result + 8i64 * j);
		if (v6)
		{
			result = *(_QWORD*)(v6 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v6);
		}
	}
	for (k = 0; k < *(_DWORD*)(v0 + 212); ++k)
	{
		result = *(_QWORD*)(v0 + 224);
		v8 = *(_QWORD*)(result + 8i64 * k);
		if (v8)
		{
			result = *(_QWORD*)(v8 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v8);
		}
	}
	for (m = 0; m < *(_DWORD*)(v0 + 236); ++m)
	{
		result = *(_QWORD*)(v0 + 248);
		v10 = *(_QWORD*)(result + 8i64 * m);
		if (v10)
		{
			result = *(_QWORD*)(v10 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v10);
		}
	}
	for (n = 0; n < *(_DWORD*)(v0 + 260); ++n)
	{
		result = *(_QWORD*)(v0 + 272);
		v12 = *(_QWORD*)(result + 8i64 * n);
		if (v12)
		{
			result = *(_QWORD*)(v12 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v12);
		}
	}
	for (ii = 0; ii < *(_DWORD*)(v0 + 284); ++ii)
	{
		result = *(_QWORD*)(v0 + 296);
		v14 = *(_QWORD*)(result + 8i64 * ii);
		if (v14)
		{
			result = *(_QWORD*)(v14 + 64);
			if ((*(_BYTE*)(result + 332) & 8) != 0)
				result = sub_14056A430(v14);
		}
	}
	if (*(_DWORD*)(v0 + 308))
	{
		do
		{
			result = *(_QWORD*)(v0 + 320);
			v15 = *(_QWORD*)(result + 8 * v1);
			if (v15)
			{
				result = *(_QWORD*)(v15 + 64);
				if ((*(_BYTE*)(result + 332) & 8) != 0)
					result = sub_14056A430(v15);
			}
			v1 = (unsigned int)(v1 + 1);
		} while ((unsigned int)v1 < *(_DWORD*)(v0 + 308));
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

