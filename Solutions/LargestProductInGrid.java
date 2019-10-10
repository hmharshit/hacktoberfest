package com.luko.LargestProductInGrid;

/**
 * This short program looks for the cell, that has the biggest sum, when added to their neighbour cells
 * and prints their position and sum at the end.
 * @author Lukas Kohlmaier
 *
 */
public class LargestProductInGrid {
	static int[][] numGrid = { 
			{ 1,2, 77 },
			{ 2, 34, 90 },
			{ 43, 2, 23 },
			{ 15, 11, 60 }
	};
	

	public static void main(String[] args) {
		int sumVar = 0;
		int xRes = 0;
		int yRes = 0;
		
		for(int x = 0; x < numGrid.length; x++) {
			for(int y = 0; y < numGrid[0].length; y++) {
				if(calculateGridSum(x, y) > sumVar) {
					sumVar = calculateGridSum(x, y);
					xRes = x;
					yRes = y;
				}
			}
		}
		System.out.println("The cell with the biggest grid sum is x= " + xRes + " y= " + yRes + " sum: " + sumVar);
	}
	
	/**
	 * 
	 * @param x The x coordinate of the position to calculate the sum for.
	 * @param y The y coordinate of the position to calculate the sum for.
	 * @return The sum of the given cell position with their direct neighbours.
	 */
	private static int calculateGridSum(int x, int y) {
		int finalSum = 0;
		
		if(y > 0) { //Adding the item above
			finalSum += numGrid[x][y - 1];
			
			if(x > 0) { //Adding the item above left
				finalSum += numGrid[x - 1][y - 1];
			}
			
			if(numGrid.length - x > 1) { //Adding the item above right
				finalSum += numGrid[x + 1][y - 1];
			}
		}
		
		if(x > 0) { //Adding the item left
			finalSum += numGrid[x - 1][y];
		}
		
		if(numGrid.length - x > 1) { //Adding the item right
			finalSum += numGrid[x + 1][y];
		}
		
		if(numGrid[0].length - y > 1) { //Adding the item below
			finalSum += numGrid[x][y + 1];
			
			if(x > 0) { //Adding the item below left
				finalSum += numGrid[x - 1][y + 1];
			}
			
			if(numGrid.length - x > 1) { //Adding the item below right
				finalSum += numGrid[x + 1][y + 1];
			}
		}
		return finalSum;
	}
}
