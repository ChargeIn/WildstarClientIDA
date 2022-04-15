#include "../winhttp.h"

//----- (00000001403B2C40) ----------------------------------------------------
__int64 __fastcall sub_1403B2C40(__int64 a1, _QWORD* a2, int a3, int a4)
{
	_DWORD* v4; // rax
	int v5; // ecx
	int v6; // eax
	__int64 result; // rax

	v4 = *(_DWORD**)(a1 + 112);
	if (a3)
		v5 = v4[83];
	else
		v5 = v4[86];
	if (a3)
		v6 = v4[84];
	else
		v6 = v4[87];
	if ((v5 & 1) != 0)
	{
		if ((v6 & 1) != 0)
		{
			if (!a2[91])
			{
				result = 123i64;
				if (a3)
					return 74i64;
				return result;
			}
		}
		else if (a2[91] && !a4)
		{
			result = 122i64;
			if (a3)
				return 73i64;
			return result;
		}
	}
	if ((v5 & 2) != 0)
	{
		if ((v6 & 2) != 0)
		{
			if (!a2[93])
			{
				result = 125i64;
				if (a3)
					return 76i64;
				return result;
			}
		}
		else if (a2[93] && !a4)
		{
			result = 124i64;
			if (a3)
				return 75i64;
			return result;
		}
	}
	if ((v5 & 4) != 0)
	{
		if ((v6 & 4) != 0)
		{
			if (!a2[95])
			{
				result = 127i64;
				if (a3)
					return 78i64;
				return result;
			}
		}
		else if (a2[95] && !a4)
		{
			result = 126i64;
			if (a3)
				return 77i64;
			return result;
		}
	}
	if ((v5 & 8) != 0)
	{
		if ((v6 & 8) != 0)
		{
			if (!a2[97])
			{
				result = 129i64;
				if (a3)
					return 80i64;
				return result;
			}
		}
		else if (a2[97] && !a4)
		{
			result = 128i64;
			if (a3)
				return 79i64;
			return result;
		}
	}
	if ((v5 & 0x10) != 0)
	{
		if ((v6 & 0x10) != 0)
		{
			if (!a2[99])
			{
				result = 131i64;
				if (a3)
					return 82i64;
				return result;
			}
		}
		else if (a2[99] && !a4)
		{
			result = 130i64;
			if (a3)
				return 81i64;
			return result;
		}
	}
	if ((v5 & 0x20) != 0)
	{
		if ((v6 & 0x20) != 0)
		{
			if (!a2[101])
				return 199 - (unsigned int)(a3 != 0);
		}
		else if (a2[101] && !a4)
		{
			return 201 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x40) != 0)
	{
		if ((v6 & 0x40) != 0)
		{
			if (!a2[103])
			{
				result = 135i64;
				if (a3)
					return 86i64;
				return result;
			}
		}
		else if (a2[103] && !a4)
		{
			result = 134i64;
			if (a3)
				return 85i64;
			return result;
		}
	}
	if ((v5 & 0x80u) != 0)
	{
		if ((v6 & 0x80u) == 0)
		{
			if (a2[105] && !a4)
				return 205 - (unsigned int)(a3 != 0);
		}
		else if (!a2[105])
		{
			return 203 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x100) != 0)
	{
		if ((v6 & 0x100) != 0)
		{
			if (!a2[107])
			{
				result = 154i64;
				if (a3)
					return 157i64;
				return result;
			}
		}
		else if (a2[107] && !a4)
		{
			result = 161i64;
			if (a3)
				return 158i64;
			return result;
		}
	}
	if ((v5 & 0x200) != 0)
	{
		if ((v6 & 0x200) != 0)
		{
			if (!a2[109])
				return (unsigned int)(a3 != 0) + 155;
		}
		else if (a2[109] && !a4)
		{
			return 160 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x400) != 0)
	{
		if ((v6 & 0x400) != 0)
		{
			if (!a2[111])
				return (unsigned int)(a3 != 0) + 155;
			goto LABEL_111;
		}
		if (a2[111] && !a4)
			return 160 - (unsigned int)(a3 != 0);
	}
LABEL_111:
	if ((v5 & 0x800) != 0)
	{
		if ((v6 & 0x800) != 0)
		{
			if (!a2[113])
				return 207 - (unsigned int)(a3 != 0);
		}
		else if (a2[113] && !a4)
		{
			return 209 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x1000) != 0)
	{
		if ((v6 & 0x1000) != 0)
		{
			if (!a2[115])
				return 211 - (unsigned int)(a3 != 0);
		}
		else if (a2[115] && !a4)
		{
			return 213 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x2000) != 0)
	{
		if ((v6 & 0x2000) != 0)
		{
			if (!a2[117])
				return 215 - (unsigned int)(a3 != 0);
		}
		else if (a2[117] && !a4)
		{
			return 217 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x4000) != 0)
	{
		if ((v6 & 0x4000) != 0)
		{
			if (!a2[119])
				return 219 - (unsigned int)(a3 != 0);
		}
		else if (a2[119] && !a4)
		{
			return 221 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x8000) != 0)
	{
		if ((v6 & 0x8000) != 0)
		{
			if (!a2[121])
				return 223 - (unsigned int)(a3 != 0);
		}
		else if (a2[121] && !a4)
		{
			return 225 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x10000) != 0)
	{
		if ((v6 & 0x10000) != 0)
		{
			if (!a2[123])
				return 227 - (unsigned int)(a3 != 0);
		}
		else if (a2[123] && !a4)
		{
			return 229 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x20000) != 0)
	{
		if ((v6 & 0x20000) != 0)
		{
			if (!a2[125])
				return 231 - (unsigned int)(a3 != 0);
		}
		else if (a2[125] && !a4)
		{
			return 233 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x40000) != 0)
	{
		if ((v6 & 0x40000) != 0)
		{
			if (!a2[127])
				return 235 - (unsigned int)(a3 != 0);
		}
		else if (a2[127] && !a4)
		{
			return 237 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x80000) != 0)
	{
		if ((v6 & 0x80000) != 0)
		{
			if (!a2[129])
				return 239 - (unsigned int)(a3 != 0);
		}
		else if (a2[129] && !a4)
		{
			return 241 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x100000) != 0)
	{
		if ((v6 & 0x100000) != 0)
		{
			if (!a2[131])
				return 243 - (unsigned int)(a3 != 0);
		}
		else if (a2[131] && !a4)
		{
			return 245 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x200000) != 0)
	{
		if ((v6 & 0x200000) != 0)
		{
			if (!a2[133])
				return 247 - (unsigned int)(a3 != 0);
		}
		else if (a2[133] && !a4)
		{
			return 249 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x400000) != 0)
	{
		if ((v6 & 0x400000) != 0)
		{
			if (!a2[135])
				return 259 - (unsigned int)(a3 != 0);
		}
		else if (a2[135] && !a4)
		{
			return 261 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x800000) != 0)
	{
		if ((v6 & 0x800000) != 0)
		{
			if (!a2[137])
				return 265 - (unsigned int)(a3 != 0);
		}
		else if (a2[137] && !a4)
		{
			return 267 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x1000000) != 0)
	{
		if ((v6 & 0x1000000) != 0)
		{
			if (!a2[139])
				return 270 - (unsigned int)(a3 != 0);
		}
		else if (a2[139] && !a4)
		{
			return 272 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x2000000) != 0)
	{
		if ((v6 & 0x2000000) != 0)
		{
			if (!a2[141])
				return 291 - (unsigned int)(a3 != 0);
		}
		else if (a2[141] && !a4)
		{
			return 293 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x4000000) != 0)
	{
		if ((v6 & 0x4000000) != 0)
		{
			if (!a2[143])
				return 296 - (unsigned int)(a3 != 0);
		}
		else if (a2[143] && !a4)
		{
			return 298 - (unsigned int)(a3 != 0);
		}
	}
	if ((v5 & 0x8000000) != 0)
	{
		if ((v6 & 0x8000000) != 0)
		{
			if (!a2[145])
				return 301 - (unsigned int)(a3 != 0);
		}
		else if (a2[145] && !a4)
		{
			return 303 - (unsigned int)(a3 != 0);
		}
	}
	return 0i64;
}

